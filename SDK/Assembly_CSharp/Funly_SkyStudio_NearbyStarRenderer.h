#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "BaseStarDataRenderer.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
namespace UnityEngine_CoreModule::UnityEngine { struct RenderTexture; };
namespace mscorlib::System { struct String; };
#include "..\UnityEngine_CoreModule\UnityEngine_RenderTextureFormat.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector4.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector4; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace UnityEngine_CoreModule::UnityEngine { struct Texture2D; };
namespace mscorlib::System::Collections { struct IEnumerator; };

namespace Assembly_CSharp::Funly::SkyStudio
{
	struct NearbyStarRenderer : Assembly_CSharp::BaseStarDataRenderer
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			int32_t kMaxStars;
			int32_t kStarPointTextureWidth;
			float kStarPaddingRadiusMultipler;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		UnityEngine_CoreModule::UnityEngine::RenderTexture* CreateRenderTexture(mscorlib::System::String* name, int32_t renderTextureSize, UnityEngine_CoreModule::UnityEngine::RenderTextureFormat format);
		UnityEngine_CoreModule::UnityEngine::Material* GetNearbyStarMaterial(UnityEngine_CoreModule::UnityEngine::Vector4 randomSeed, int32_t starCount);
		void WriteDebugTexture(UnityEngine_CoreModule::UnityEngine::RenderTexture* rt, mscorlib::System::String* path);
		UnityEngine_CoreModule::UnityEngine::Texture2D* GetStarListTexture(mscorlib::System::String* starTexKey, int32_t& validStarPixelCount);
		mscorlib::System::Collections::IEnumerator* ComputeStarData();
		UnityEngine_CoreModule::UnityEngine::Texture2D* ConvertToTexture2D(UnityEngine_CoreModule::UnityEngine::RenderTexture* rt);
		void _ctor();
	};
}

