int main(){
    float grade1;
    float grade2;
    float gpa;
    printf("What is the grade of the first test?\n ");
    scanf("%f", &grade1);
    printf("What is the grade of the second test??\n ");
    scanf("%f", &grade2);
    gpa=(grade1+grade2)/2;
    if(gpa>=7){
        printf("The student has been approved");
    }
    else{
        printf("The student has been reproved");
    }
}
