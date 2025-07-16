#include <stdio.h>
#include <assert.h>
int main(int argc, char** argv){
	FILE *file = fopen("test.svg", "w");

	if (file == NULL) {
		printf("Error opening file!\n");
		return 1; // Exit with an error code
	}
	const int size=21;
	const int cellSize=10;
	fprintf(file,"<svg xmlns=\"http://www.w3.org/2000/svg\" width=\"%d\" height=\"%d\" viewBox=\"0 0 %d %d\">\n",size*cellSize,size*cellSize,size*cellSize,size*cellSize);
	fprintf(file,"  <g id=\"a\">\n");
	fprintf(file,"    <rect width=\"%d\" height=\"%d\"/>\n",cellSize*7,cellSize*7);
	fprintf(file,"    <rect x=\"%d\" y=\"%d\" width=\"%d\" height=\"%d\" fill=\"#FFF\"/>\n",cellSize,cellSize,cellSize*5,cellSize*5);
	fprintf(file,"    <rect x=\"%d\" y=\"%d\" width=\"%d\" height=\"%d\"/>\n",cellSize*2,cellSize*2,cellSize*3,cellSize*3);
	fprintf(file,"  </g>\n");
	fprintf(file,"  <use href=\"#a\" x=\"%d\"/>\n",cellSize*14);
	fprintf(file,"  <use href=\"#a\" y=\"%d\"/>\n",cellSize*14);
	fprintf(file,"</svg>\n");
	fclose(file);

	return 0; // Exit successfully
}

