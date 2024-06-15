#include "grid.h"
#include "fem.h"

int main()
{
	setlocale(LC_ALL, "Rus");
	//grid gr;
	//gr.get_grid("grid.txt");

	std::ofstream out("out.txt");

	//for (int i = 0; i < gr.MeshXY.size(); i++)
	//	out << gr.MeshXY[i].x << "\t" << gr.MeshXY[i].y << std::endl;

	//out.close();
	//out.open("y.txt");
	//for (int i = 0; i < gr.MeshXY.size(); i++)
	//	out << gr.MeshXY[i].y << std::endl;
	//out.close();

	FEM fm;
	fm.Compute();

	//out.open("q.txt");
	//for (int i = 0; i < fm.q.size(); i++)
	//	out << fm.q[i] << std::endl;
	//out.close();

	////f.edge_from_nodes(1, 7);
	////f.FE_and_nodes_from_edge(9);

	//std::vector<double> exact(fm.q.size());
	//for (int i = 0; i < gr.MeshXY.size(); i++)
	//{
	//	point t = { gr.MeshXY[i].x, gr.MeshXY[i].y };
	//	exact[i] = fm.bc1_value(t);
	//}

	//FILE* f;
	//fopen_s(&f, "res.txt", "w");
	//if (f)
	//{
	//	for (int i = 0; i < gr.n_line + 1; i += 2)
	//		for (int j = 0; j < gr.n_circle + 1; j += 2)
	//		{
	//			fprintf(f, "%.3f    %.3f    %e    %e     %e\n", gr.MeshXY[i * (gr.n_circle+1) + j].x, gr.MeshXY[i * (gr.n_circle + 1) + j].y, exact[i * (gr.n_circle + 1) + j], fm.q[i * (gr.n_circle + 1) + j], abs(fm.q[i * (gr.n_circle + 1) + j] - exact[i * (gr.n_circle + 1) + j]) / abs(exact[i * (gr.n_circle + 1) + j]));
	//		}
	//}
	return 0;
}