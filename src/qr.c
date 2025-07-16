#include <stdio.h>
#include <assert.h>
int main(int argc, char** argv){
	FILE *file = fopen("test.svg", "w");

	if (file == NULL) {
		printf("Error opening file!\n");
		return 1; // Exit with an error code
	}
	fprintf(file,"<svg xmlns=\"http://www.w3.org/2000/svg\" width=\"210\" height=\"210\" viewBox=\"0 0 210 210\">");
	fprintf(file,"<path fill-rule=\"evenodd\" d=\"M0 0h70v70H0m10-60h50v50H10m10-40h30v30H20\" id=\"a\"");
	fprintf(file,"\t<use href=\"#a\" x=\"140\"/>\n");
	fprintf(file,"\t<use href=\"#a\" y=\"140\"/>\n");
	fprintf(file,"</svg>\n");
	fclose(file);

	return 0; // Exit successfully
}

