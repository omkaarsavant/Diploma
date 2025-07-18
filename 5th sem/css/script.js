// Function for calculating grades
const calculate = () => {

// Getting input from user into height variable.
let AJP = document.querySelector("#AJP").value;
let OSY = document.querySelector("#OSY").value;
let CSS = document.querySelector("#CSS").value;
let STE = document.querySelector("#STE").value;
let grades = "";

// Input is string so typecasting is necessary. */
let totalgrades =
	parseFloat(AJP) +
	parseFloat(OSY) +
	parseFloat(CSS) +
	parseFloat(STE);

// Checking the condition for the providing the
// grade to student based on percentage
let percentage = (totalgrades / 400) * 100;
if (percentage <= 100 && percentage >= 80) {
	grades = "A";
} else if (percentage <= 79 && percentage >= 60) {
	grades = "B";
} else if (percentage <= 59 && percentage >= 40) {
	grades = "C";
} else {
	grades = "F";
}
// Checking the values are empty if empty than
// show please fill them
if (AJP == "" || OSY == ""
			|| CSS == "" || STE == "") {
	document.querySelector("#showdata").innerHTML
		= "<center>Please enter all the fields</center>";
} else {

	// Checking the condition for the fail and pass
	if (percentage >= 39.5) {
	document.querySelector(
		"#showdata"
	).innerHTML =
		` <center>Out of 400 your total is ${totalgrades}
		and percentage is ${percentage}%. <br>
		Your grade is ${grades}. You are Pass. </center>`;
	} else {
	document.querySelector(
		"#showdata"
	).innerHTML =
		` <center>Out of 400 your total is ${totalgrades}
		and percentage is ${percentage}%. <br>
		Your grade is ${grades}. You are Fail.</center> `;
	}
}
};
