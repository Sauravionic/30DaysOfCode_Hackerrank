class Student :  public Person{
	private:
		vector<int> testScores;  
	public:
  		// Write your constructor
        Student(string firstName, string lastName, int identification, vector<int> scores)
        :Person(firstName,lastName,identification){
            this->testScores = scores;
        }
  		// Write char calculate()
        char calculate() {
            int total, length;
            total = 0;
            length = this->testScores.size();
            for(int i: this->testScores) {
                total += i;
            }
            float avg = total/length;
            char grade;
            if(avg <= 100 && avg >= 90) {
                grade = 'O';
            } else if(avg < 90 && avg >= 80) {
                grade = 'E';
            } else if(avg < 80 && avg >= 70) {
                grade = 'A';
            } else if(avg < 70 && avg >= 55) {
                grade = 'P';
            } else if(avg < 55 && avg >= 40) {
                grade = 'D';
            } else if(avg < 40) {
                grade = 'T';
            }
            return grade;
        }
};