#include <stdio.h> 
int main()
{
	    float firstmarks [2][3];
	        printf("Enter the firstmarks:\n");
		    for(int i=0; i<2; i++)
			        {
					        for(int j=0; j<3; j++)
							        {
									            printf("First Marks [%d][%d]:", i,j);
										                scanf("%f", &firstmarks[i][j]);
												        }
						    }
		        float secondmarks [3][2];
			    printf("Enter the secondmarks:\n");
			        for (int i=0; i<3; i++)
					    {
						            for (int j=0; j<2; j++)            
								            {
										                printf("Second Marks [%d][%d]:", i,j);
												            scanf("%f", &secondmarks[i][j]);
													            }
							            
							        }
				    float product[2][2];
				        for(int i=0; i<2; i++)
						    {
							            for(int j=0; j<2; j++)
									            {
											                product[i][j]=0;
													        }
								        }
					    for(int i=0; i<2; i++)
						        {
								        for(int j=0; j<2; j++)
										        {
												            for(int k=0; k<3; k++)
														                {
																	                product[i][j]+= firstmarks[i][k] * secondmarks[k][j];
																			            }
													            }
									    }
					        printf("First Marks:\n");
						    for(int i=0; i<2; i++)
							        {
									        for(int j=0; j<3; j++)
											        {
													            printf("%.2f\t", firstmarks[i][j]);
														            }
										        printf("\n");
											    }
						        printf("Second Marks:\n");
							    for(int i=0; i<3; i++)
								        {
										        for(int j=0; j<2; j++)
												        {
														            printf("%.2f\t", secondmarks[i][j]);
															            }
											        printf("\n");
												    }
							        printf("\nProduct of Matrices (%d x %d):\n", 2, 2);
								    for(int i=0; i<2; i++)
									        {
											        for(int j=0; j<2; j++)
													        {
															            printf("%8.2f", product[i][j]);
																            }
												        printf("\n");
													    }
}
