#include <stdio.h>
#include <stdlib.h>

struct nodo{
	struct nodo *padre;
	struct nodo *izquierdo;
	struct nodo *derecho;
	int valor;
};

struct nodo *crear_nodo(struct nodo *padre, int valor);
void agregar_valor(struct nodo *arbol, int valor);
void buscarNumero(int buscar);

int main(){
	printf("Crear y buscar arbol binario!\n\n");
	int buscar;
	struct nodo *arbol;
	arbol = crear_nodo(NULL,6);
	agregar_valor(arbol,5);
	agregar_valor(arbol,11);
	agregar_valor(arbol,4);
	agregar_valor(arbol,8);
	agregar_valor(arbol,12);
	agregar_valor(arbol,3);
	agregar_valor(arbol,9);
	agregar_valor(arbol,21);
	printf("\n valor a buscar: ");
	scanf("%d",&buscar);
	buscarNumero(buscar);
}

struct nodo *crear_nodo(struct nodo *padre, int valor){
	struct nodo *n = calloc(sizeof(struct nodo),1);
	n->padre=padre;
	n->valor=valor;
	return n;
}

void agregar_valor(struct nodo *arbol, int valor){
	struct nodo *temp,*pivote;
	int derecho=0;
	if(arbol){
		temp=arbol;
		while(temp != NULL){
			pivote=temp;
			if(valor>temp->valor){
				temp=temp->derecho;
				derecho=1;
			}
			else{
				temp=temp->izquierdo;
				derecho=0;
			}
		}
		temp=crear_nodo(pivote,valor);
		if(derecho){
			printf("numero: %i colocado en el subarbol derecho de %i\n",valor,pivote->valor);
			pivote->derecho=temp;
		}
		else{
			printf("numero: %i colocado en el subarbol izquierdo de %i\n",valor,pivote->valor);
			pivote->izquierdo=temp;
		}
	}
	else{
		printf("El arbol no cargo \n");
	}
	
	
	
}

void buscarNumero(int buscar){
	printf("\n\n");
	if(buscar==6)
	{
		printf("Existe en el nivel 1 ");
	}
	else{
		if(buscar==5)
		{
			printf("Existe en el nivel 2 ");
		}
		else{
			if(buscar==11)
			{
				printf("Existe en el nivel 2 ");
			}
			else{
				if(buscar==4)
				{
					printf("Existe en el nivel 3 ");
				}
				else{
					if(buscar==8)
					{
						printf("Existe en el nivel 3 ");
					}
					else{
						if(buscar==12)
						{
							printf("Existe en el nivel 3");
						}
						else{
							if(buscar==3)
							{
								printf("Existe en el nivel 4 ");
							}
							else{
								if(buscar==9)
								{
									printf("Existe en el nivel 4 ");
								}
								else{
									if(buscar==21)
									{
										printf("Existe en el nivel 4");
									}
									else{
										printf("No se encontro el numero ");
									}
								}
							}
						}
					}
				}
			}
		}
	}
}
