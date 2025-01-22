INPUT_FILE="one.txt"
OUTPUT_FILE="your_name.html"

echo "<!DOCTYPE html>" >> $OUTPUT_FILE
echo "<html>" >> $OUTPUT_FILE
echo "<head><title>Credit Record</title></head>" >> $OUTPUT_FILE
echo "<body>" >> $OUTPUT_FILE
echo "<h1>Credit Record for Current Semester</h1>" >> $OUTPUT_FILE

echo "<table>" >> $OUTPUT_FILE
echo "<thead>" >> $OUTPUT_FILE
echo "<tr>" >> $OUTPUT_FILE
echo "<th>Course Name</th><th>Course Code</th><th>Credits</th>" >> $OUTPUT_FILE
echo "</tr>" >> $OUTPUT_FILE
echo "</thead>" >> $OUTPUT_FILE
echo "<tbody>" >> $OUTPUT_FILE

tail -n +2 $INPUT_FILE | while IFS=',' read -r course_name course_code credits
do
    echo "<tr>" >> $OUTPUT_FILE
    echo "<td>$course_name</td><td>$course_code</td><td>$credits</td>" >> $OUTPUT_FILE
    echo "</tr>" >> $OUTPUT_FILE
done

echo "</tbody>" >> $OUTPUT_FILE
echo "</table>" >> $OUTPUT_FILE
echo "</body>" >> $OUTPUT_FILE
echo "</html>" >> $OUTPUT_FILE

echo "HTML file '$OUTPUT_FILE' has been generated successfully."
