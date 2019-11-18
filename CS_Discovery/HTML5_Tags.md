## HTML 5 Tags

|Tags|Usages|
|:-----:|--------|
|\<!DOCTYPE html>| Defines the html document type |
|\<!--...--> | Defines a comment|
|\<html> \</html>| Defines an html document |
|\<head> \</head>| Defines information about the document|
|\<title> \</title> | Defines the document title|
|\<link rel="stylesheet" type="text/css" href="style.css">|Defines a CSS resource reference|
|\<body> \</body>| Defines the body element |
|\<h1> \</h1> | Defines header 1|
|\<h2> \</h2> | Defines header 2|
|\<h3> \</h3> | Defines header 3|
|\<h4> \</h4> | Defines header 4|
|\<h5> \</h5> | Defines header 5|
|\<h6> \</h6> | Defines header 6|
|\<ul> \</ul>| Defines an unordered list|
|\<ol> \</ol> | Defines an ordered list|
|\<li> \</li> | Defines a list item|
|\<p> \</p>| Defines a paragraph|
|\<img src=" " alt=" ">| Defines an image|
|\<a href=" "> name \</a> |Defines a hyperlink|

#### Tag attribute
\<p class = " "> \</p>

*Note: Attribue can be put on any html tag, however, ususally it is only put on content tags.*

### Basic HTML Document Structure

```html
<!DOCTYPE html>
<html>
  <head>
    <title> Document Name </title>
    <link rel="stylesheet" type="text/css" href="style.css">
  </head>
  <body>
    <h1> Some Header </h1>
    
    <!-- Navigation Menu-->
    <a href="index.html"> home </a> |
    <a href="page1.html"> page 1 </a> |
    <a href="page2.html"> page 2 </a> 
    
    <!-- Unordered List-->
    <ul>
      <li> Sth </li>
      <li> Food </li>
    </ul>
    
    <!-- Ordered List-->
    <ol>
      <li> item 1 </li>
      <li> item 2 </li>
    </ol>
    
    <p> Lorem ipsum dolor sit amet, consectetur adipiscing elit. Donec at est non lorem tincidunt lacinia. Mauris bibendum, erat et elementum dapibus, ligula quam finibus ipsum, vel euismod ipsum tortor eu neque. Nulla condimentum purus ac sollicitudin aliquet. Suspendisse sit amet rutrum felis, rhoncus ornare dolor. In in suscipit velit. Maecenas imperdiet, arcu ut mattis imperdiet, est nisi ultrices leo, sed tristique quam purus eget lectus. Suspendisse pretium enim purus, id tempus eros dictum non. Phasellus at quam velit. </p>
    
    <img src="pets.jpg" alt="pets">   
  </body>
</html>
```
