shader "Material4"
{
	technique
	{
		pass
		{
			cullMode none;
			lighting true;
			lightingSpecular true;
			materialAmbient 1 1 1;
			materialDiffuse 1 1 1;
			materialSpecular 0.117647 0.117647 0.117647;
			materialSpecularPower 12.5;
			alphaTest greater 0.7;

			stage
			{
				texture "texture/Chi-Ha_Whe1_H";
				combine color mul texture diffuse;
				combine alpha single texture;
			}
		}
	}
}

