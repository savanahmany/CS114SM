ref class cell
{
private:
	int row, col;
	char turn;
	char status;
private:
	System::Drawing::Graphics^g;

	System::Drawing::Bitmap^ xmark = gcnew Bitmap("xmark.bmp");
	System::Drawing::Bitmap^ omark = gcnew Bitmap("omark.bmp");
	System::Drawing::Bitmap^ game = gcnew Bitmap("grid.bmp");

public:
	cell(int r, int c, char s);

	void setStatus(char s);
	int getStatus(int r, int c);

	void DrawGrid();

	//void getTurn() { if (turn == 0) turn = 1; else turn = 0; }


};
