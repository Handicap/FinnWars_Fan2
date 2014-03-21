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
			materialSpecularPower 12.5;
			alphaTest greater 0.7;

			stage
			{
				texture "texture/Wespe_Whe1_Z";
				combine color mul texture diffuse;
				combine alpha single texture;
			}
		}
	}
}

shader "Material7"
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
			materialSpecularPower 12.5;
			alphaTest greater 0.7;

			stage
			{
				texture "texture/Wespe_Whe5_Z";
				combine color mul texture diffuse;
				combine alpha single texture;
			}
		}
	}
}

