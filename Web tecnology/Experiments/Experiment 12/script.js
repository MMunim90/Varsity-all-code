function countElements(tagName) {
    let elements = document.getElementsByTagName(tagName);
    let count = elements.length; 

    document.getElementById("output").innerText = `Number of <${tagName}> elements: ${count}`;
}


countElements("p");
