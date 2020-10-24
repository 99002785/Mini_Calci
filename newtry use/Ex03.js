//Example for creating JSON Rest server....
const app = require('express')();
const parser = require("body-parser");
const fs = require("fs");
const dir = __dirname;

//middleware....
app.use(parser.urlencoded({ extended: true }));
app.use(parser.json());

//GET(Reading), POST(Adding), PUT(Updating), DELETE(Deleting) data....
let Users = []; //blank array...
let flag = 1;

function readData() {
    const filename = "data.json"; //new file... 
    const jsonContent = fs.readFileSync(filename, 'utf-8');
    Users = JSON.parse(jsonContent);
}

function saveData() {
    const filename = "data.json";
    const jsonData = JSON.stringify(Users);
    fs.writeFileSync(filename, jsonData, 'utf-8');
}
app.get("/Users", (req, res) => {
    readData();
    res.send(JSON.stringify(Users));
})

app.get("/Users/:id", (req, res) => {
    const userid = req.params.id;
    if (Users.length == 0) {
        readData();
    }
    let foundRec = Users.find((e) => e.userId == userid);
    if (foundRec == null)
        throw "User not found";
    res.send(JSON.stringify(foundRec))
})

app.put("/Users", (req, res) => {
    if (Users.length == 0)
        readData(); //Fill the array if it is not loaded....
    let body = req.body;
    //iterate thro the collection
    for (let index = 0; index < Users.length; index++) {
        let element = Users[index];
        if (element.userId == body.userId) { //find the matching record
            element.userName = body.userName;
            element.userAddress = body.userAddress;
            element.userSalary = body.userSalary;
            saveData();
            res.send("User updated successfully");
        }
    }
    //update the data
    //exit the function....
})

app.post('/Users', (req, res) => {
    if (Users.length == 0)
        readData(); //Fill the array if it is not loaded....
    let body = req.body; //parsed data from the POST...



    for (let index = 0; index < Users.length; index++) {
        let element = Users[index];
        if (element.userName == body.userName) { //find the matching record
            res.send("User name already exists");
            flag = 0;
        }

    }


    if (flag >= 1) {
        Users.push(body);
        saveData(); //updating to the JSON file...
        res.send("User added successfully");
    }

})


app.listen(1234, () => {
    console.log("Server available at 1234");
})