#include <iostream>
#include <iomanip>
class GradeActivity { //Klasa bazowa
	
	private:
		double score;
		
	public:
		GradeActivity() { //Konstruktor domyslny z wartoscia 0.0
			score = 0.0;
		}
		
		GradeActivity(double s) { //Konstruktor  
			score = s;
		}
		
		void setScore(double s)
		{
			score = s;
		}
		
		double getScore() const
		{
			return score;
		}
		
		char getLetterGrade() const;	
};

class FinalExam : public GradeActivity { // Klasa pochodna ( dziedziczy po klasie FinalExam)

	private:
		int numQuestions;
		double pointsEach;
		int numMissed;
		
	public:
		FinalExam()
		{
			numQuestions = 0;
			pointsEach = 0.0;
			numMissed = 0;
		}
		
		FinalExam(int questions, int missed)
		{
			set(questions, missed);
		}
		
		void set(int, int);
		
		double getNumQuestions() const
		{
			return numQuestions;
		}
		
		double getPointsEach() const
		{
			return pointsEach;
		}
		
		int getNumMissed() const
		{
			return numMissed;
		}
		
		
};

char GradeActivity::getLetterGrade() const
	{
		char letterGrade;
		
		if (score > 89)
			letterGrade = 'A';
		
		else if (score > 79)
			letterGrade = 'B';
		else if (score > 69)
			letterGrade = 'C';
		else if (score > 59)
			letterGrade = 'D';
		else 
			letterGrade = 'F';
			
			return letterGrade;
	}
	
	
	
	
	
void FinalExam::set(int questions, int missed)
{
	double numericScore;
	
	numQuestions = questions;
	numMissed = missed;
	
	pointsEach = 100.0 / numQuestions;
	numericScore = 100.0 - (missed * pointsEach);
	
	setScore(numericScore);
}

int main()

{
	int questions;
	int missed;
	
	std::cout << "Z ilu pytan sklada sie test" << std::endl;
	std::cin >> questions;
	
	std::cout <<"Na ile pytan uczen blednie odpowiedzial?" << std::endl;
	std::cin >> missed;
	
	FinalExam test(questions, missed);
	
    std:: setprecision(2);
	std::cout << "kazde pytanie jest warte " << test.getPointsEach() << std::endl;
	std::cout << "Ocena  liczbowa  testu: " << test.getScore() << std::endl;
	std::cout << "Ocena literowa testu: " << test.getLetterGrade() << std::endl;
	
	
	
	
	
	
	
	
	
	
	return 0;
}

