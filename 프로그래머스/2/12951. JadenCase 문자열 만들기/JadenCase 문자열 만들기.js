function solution(s) {
    return s.split(" ").map((str) => {
        console.log(str)
        if (str === "") {
            return ""
        } else {
            return (str[0].toUpperCase() + str.slice(1).toLowerCase()) 
        }
    }).join(" ")
}