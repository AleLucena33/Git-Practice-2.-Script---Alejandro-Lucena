package es.uma.alelucena.org.iis2024.parcial1;

public class ProgIIEnrollmentStrategy implements EnrollmentStrategy{
    @Override
    public String enroll (Student student, CourseCatalog courseCatalog, String courseName){
        if (!student.passedCourses.contains("Programming I")){
            return "Enrollment failed: Programming I has not been passed";
        }

        if(student.currentCourses.contains(courseName)){
           return "Enrollment failed: Already enrolled";
        }

        courseCatalog.enrollStudent(student.identifier, courseName);
        student.currentCourses.add(courseName);

        return "Enrollment successful";
    }
}
