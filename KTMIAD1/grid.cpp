#include "grid.h"

double grid::angle_step(int n, double k)
{
   if (k != 1)
      return 90.0 * (1 - k) / (1 - pow(k, n));
   else
      return 90.0 / n;
}

double grid::coord_step(double x0, double x1, int n, double k)
{
   if (k != 1)
      return (x1 - x0) * (1 - k) / (1 - pow(k, n));
   else
      return (x1 - x0) / n;
}

void grid::get_grid(std::string file)
{
   st.resize(2);
   std::ifstream inGrid(file);
   if (inGrid.is_open())
   {
      for (int i = 0; i < 2; i++)
      {
         inGrid >> st[i].x >> st[i].y >> st[i].z;
      }

      inGrid >> n_x >> n_y >> n_z >> k_x >> k_y >> k_z;
   }

   double tmp, h;

   //Обработка по X
   if (k_x != 1)
      h = (st[1].x - st[0].x) * (1. - k_x) / (1. - pow(k_x, n_x));
   else
      h = (st[1].x - st[0].x) / n_x;

   _x.push_back(st[0].x);
   for (int i = 0; i < n_x; i++)
   {
      _x.push_back(_x.back() + h);
      h *= k_x;
   }

   //Обработка по y
   if (k_y != 1)
      h = (st[1].y - st[0].y) * (1. - k_y) / (1. - pow(k_y, n_y));
   else
      h = (st[1].y - st[0].y) / n_y;

   _y.push_back(st[0].y);
   for (int i = 0; i < n_y; i++)
   {
      _y.push_back(_y.back() + h);
      h *= k_y;
   }

   //Обработка по z
   if (k_z != 1)
      h = (st[1].z - st[0].z) * (1. - k_z) / (1. - pow(k_z, n_z));
   else
      h = (st[1].z - st[0].z) / n_z;

   _z.push_back(st[0].z);
   for (int i = 0; i < n_z; i++)
   {
      _z.push_back(_z.back() + h);
      h *= k_z;
   }

   //Заполнение структуры сетки
   for (int i = 0; i < _z.size(); i++)
      for (int j = 0; j < _y.size(); j++)
         for (int k = 0; k < _x.size(); k++)
            MeshXYZ.push_back({_x[k], _y[j], _z[i]});
}