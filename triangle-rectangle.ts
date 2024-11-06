localStorage

function estTriangleRectangle(a: number, b: number, c: number): boolean {
  let hypotenuse: number, cote1: number, cote2: number;

  // Identifier l'hypotenuse et les autres côtés
  if (a >= b && a >= c) {
      hypotenuse = a;
      cote1 = b;
      cote2 = c;
  } else if (b >= a && b >= c) {
      hypotenuse = b;
      cote1 = a;
      cote2 = c;
  } else {
      hypotenuse = c;
      cote1 = a;
      cote2 = b;
  }

  // Vérifier la relation de Pythagore
  return hypotenuse * hypotenuse === cote1 * cote1 + cote2 * cote2;
}

// Fonction principale
function main() {
  const a: number = parseFloat(prompt("Entrez la longueur du côté a :") || "0");
  const b: number = parseFloat(prompt("Entrez la longueur du côté b :") || "0");
  const c: number = parseFloat(prompt("Entrez la longueur du côté c :") || "0");

  // Vérifier si les longueurs peuvent former un triangle rectangle
  if (estTriangleRectangle(a, b, c)) {
      console.log("Les longueurs peuvent former un triangle rectangle.");
  } else {
      console.log("Les longueurs ne peuvent pas former un triangle rectangle.");
  }
}

// Exécuter la fonction principale
main();
