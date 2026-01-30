#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Unity_TextMeshPro::TMPro { struct TMP_FontAsset; };
namespace Unity_TextMeshPro::TMPro { struct TMP_SpriteAsset; };
namespace UnityEngine_CoreModule::UnityEngine { struct Material; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "TMPro_MaterialReference.h"
namespace Unity_TextMeshPro::TMPro { struct MaterialReference; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };

namespace Unity_TextMeshPro::TMPro
{
	struct MaterialReference
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t index;
		Unity_TextMeshPro::TMPro::TMP_FontAsset* fontAsset;
		Unity_TextMeshPro::TMPro::TMP_SpriteAsset* spriteAsset;
		UnityEngine_CoreModule::UnityEngine::Material* material;
		bool isDefaultMaterial;
		bool isFallbackMaterial;
		UnityEngine_CoreModule::UnityEngine::Material* fallbackMaterial;
		float padding;
		int32_t referenceCount;
		void _ctor(int32_t index, Unity_TextMeshPro::TMPro::TMP_FontAsset* fontAsset, Unity_TextMeshPro::TMPro::TMP_SpriteAsset* spriteAsset, UnityEngine_CoreModule::UnityEngine::Material* material, float padding);
		static bool Contains(IL2CPP::Array<Unity_TextMeshPro::TMPro::MaterialReference>* materialReferences, Unity_TextMeshPro::TMPro::TMP_FontAsset* fontAsset);
		static int32_t AddMaterialReference(UnityEngine_CoreModule::UnityEngine::Material* material, Unity_TextMeshPro::TMPro::TMP_FontAsset* fontAsset, IL2CPP::Array<Unity_TextMeshPro::TMPro::MaterialReference>& materialReferences, mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int32, mscorlib::System::Int32>* materialReferenceIndexLookup);
		static int32_t AddMaterialReference(UnityEngine_CoreModule::UnityEngine::Material* material, Unity_TextMeshPro::TMPro::TMP_SpriteAsset* spriteAsset, IL2CPP::Array<Unity_TextMeshPro::TMPro::MaterialReference>& materialReferences, mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int32, mscorlib::System::Int32>* materialReferenceIndexLookup);
	};
}

