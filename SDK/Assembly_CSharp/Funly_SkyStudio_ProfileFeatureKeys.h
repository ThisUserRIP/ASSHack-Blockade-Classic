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
	struct ProfileFeatureKeys : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			mscorlib::System::String* MobileQualityFeature;
			mscorlib::System::String* GradientSkyFeature;
			mscorlib::System::String* FogFeature;
			mscorlib::System::String* VertexGradientSkyFeature;
			mscorlib::System::String* SunFeature;
			mscorlib::System::String* SunCustomTextureFeature;
			mscorlib::System::String* SunSpriteSheetFeature;
			mscorlib::System::String* SunAlphaBlendFeature;
			mscorlib::System::String* SunRotationFeature;
			mscorlib::System::String* MoonFeature;
			mscorlib::System::String* MoonCustomTextureFeature;
			mscorlib::System::String* MoonSpriteSheetFeature;
			mscorlib::System::String* MoonAlphaBlendFeature;
			mscorlib::System::String* MoonRotationFeature;
			mscorlib::System::String* StarBasicFeature;
			mscorlib::System::String* StarLayer1Feature;
			mscorlib::System::String* StarLayer1CustomTextureFeature;
			mscorlib::System::String* StarLayer1SpriteSheetFeature;
			mscorlib::System::String* StarLayer1AlphaBlendFeature;
			mscorlib::System::String* StarLayer2Feature;
			mscorlib::System::String* StarLayer2CustomTextureFeature;
			mscorlib::System::String* StarLayer2SpriteSheetFeature;
			mscorlib::System::String* StarLayer2AlphaBlendFeature;
			mscorlib::System::String* StarLayer3Feature;
			mscorlib::System::String* StarLayer3CustomTextureFeature;
			mscorlib::System::String* StarLayer3SpriteSheetFeature;
			mscorlib::System::String* StarLayer3AlphaBlendFeature;
			mscorlib::System::String* RainFeature;
			mscorlib::System::String* RainSoundFeature;
			mscorlib::System::String* RainSplashFeature;
			mscorlib::System::String* LightningFeature;
			mscorlib::System::String* ThunderFeature;
			mscorlib::System::String* CloudFeature;
			mscorlib::System::String* NoiseCloudFeature;
			mscorlib::System::String* CubemapCloudFeature;
			mscorlib::System::String* CubemapNormalCloudFeature;
			mscorlib::System::String* CubemapCloudTextureFormatRGBFeature;
			mscorlib::System::String* CubemapCloudTextureFormatRGBAFeature;
			mscorlib::System::String* CubemapCloudDoubleLayerFeature;
			mscorlib::System::String* CubemapNormalCloudDoubleLayerFeature;
			mscorlib::System::String* CubemapCloudDoubleLayerCubemapFeature;
			mscorlib::System::String* CubemapNormalCloudDoubleLayerCubemapFeature;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void _ctor();
	};
}

