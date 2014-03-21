shader "Material0"
{
	technique
	{
		transparent true;
		pass
		{
			cullMode none;
			lighting true;
			lightingSpecular true;
			materialAmbient 1 1 1;
			materialDiffuse 1 1 1;
			materialSpecular 0 0 0;
			materialSpecularPower 7.5;
			alphaTest greater 0.7;


			stage
			{
				texture "texture/p4Whe5_f";
				combine color mul texture diffuse;
				combine alpha single texture;
			}
		}
	}
}

shader "Material1"
{
	technique
	{
		transparent true;
		pass
		{
			cullMode none;
			lighting true;
			lightingSpecular true;
			materialAmbient 1 1 1;
			materialDiffuse 1 1 1;
			materialSpecular 0 0 0;
			materialSpecularPower 7.5;
			alphaTest greater 0.7;


			stage
			{
				texture "texture/p4Whe6_f";
				combine color mul texture diffuse;
				combine alpha single texture;
			}
		}
	}
}

