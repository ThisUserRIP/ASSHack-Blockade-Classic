#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Unity_TextMeshPro::TMPro { struct TMP_Settings; };
namespace Unity_TextMeshPro::TMPro { struct TMP_FontAsset; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Unity_TextMeshPro::TMPro
{
	struct TMP_ResourceManager : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			Unity_TextMeshPro::TMPro::TMP_ResourceManager* s_instance;
			Unity_TextMeshPro::TMPro::TMP_Settings* s_TextSettings;
			mscorlib::System::Collections::Generic::List_1<Unity_TextMeshPro::TMPro::TMP_FontAsset>* s_FontAssetReferences;
			mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int32, Unity_TextMeshPro::TMPro::TMP_FontAsset>* s_FontAssetReferenceLookup;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		static Unity_TextMeshPro::TMPro::TMP_Settings* GetTextSettings();
		static void AddFontAsset(Unity_TextMeshPro::TMPro::TMP_FontAsset* fontAsset);
		static bool TryGetFontAsset(int32_t hashcode, Unity_TextMeshPro::TMPro::TMP_FontAsset& fontAsset);
		static void RebuildFontAssetCache(int32_t instanceID);
		void _ctor();
	};
}

