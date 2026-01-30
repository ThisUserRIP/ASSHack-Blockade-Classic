#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Funly::SkyStudio
{
	struct ShaderKeywords : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::String* Gradient;
			mscorlib::System::String* VertexGradient;
			mscorlib::System::String* Moon;
			mscorlib::System::String* MoonCustomTexture;
			mscorlib::System::String* MoonSpriteSheet;
			mscorlib::System::String* MoonAlphaBlend;
			mscorlib::System::String* MoonRotation;
			mscorlib::System::String* Sun;
			mscorlib::System::String* SunCustomTexture;
			mscorlib::System::String* SunSpriteSheet;
			mscorlib::System::String* SunAlphaBlend;
			mscorlib::System::String* SunRotation;
			mscorlib::System::String* Clouds;
			mscorlib::System::String* NoiseClouds;
			mscorlib::System::String* CubemapClouds;
			mscorlib::System::String* CubemapNormalClouds;
			mscorlib::System::String* CubemapCloudTextureFormatRGB;
			mscorlib::System::String* CubemapCloudTextureFormatRGBA;
			mscorlib::System::String* CubemapCloudDoubleLayer;
			mscorlib::System::String* CubemapNormalCloudDoubleLayer;
			mscorlib::System::String* CubemapCloudDoubleLayerCustomTexture;
			mscorlib::System::String* CubemapNormalCloudDoubleLayerCustomTexture;
			mscorlib::System::String* Fog;
			mscorlib::System::String* StarsBasic;
			mscorlib::System::String* StarLayer1;
			mscorlib::System::String* StarLayer2;
			mscorlib::System::String* StarLayer3;
			mscorlib::System::String* StarLayer1CustomTexture;
			mscorlib::System::String* StarLayer2CustomTexture;
			mscorlib::System::String* StarLayer3CustomTexture;
			mscorlib::System::String* StarLayer1SpriteSheet;
			mscorlib::System::String* StarLayer2SpriteSheet;
			mscorlib::System::String* StarLayer3SpriteSheet;
			mscorlib::System::String* RenderDebugPoints;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
	};
}

