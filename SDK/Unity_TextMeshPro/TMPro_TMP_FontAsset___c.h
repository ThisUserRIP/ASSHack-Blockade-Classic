#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "TMPro_TMP_FontAsset.h"
namespace Unity_TextMeshPro::TMPro { struct TMP_FontAsset; };
namespace Unity_TextMeshPro::TMPro { struct TMP_Character; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
namespace mscorlib::System { template <typename T, typename TResult> struct Func_2; };
namespace UnityEngine_TextCoreModule::UnityEngine::TextCore { struct Glyph; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Unity_TextMeshPro::TMPro
{
	struct TMP_FontAsset___c : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			Unity_TextMeshPro::TMPro::TMP_FontAsset___c* __9;
			mscorlib::System::Func_2<Unity_TextMeshPro::TMPro::TMP_Character, mscorlib::System::UInt32>* __9__124_0;
			mscorlib::System::Func_2<UnityEngine_TextCoreModule::UnityEngine::TextCore::Glyph, mscorlib::System::UInt32>* __9__125_0;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void _cctor();
		void _ctor();
		uint32_t _SortCharacterTable_b__124_0(Unity_TextMeshPro::TMPro::TMP_Character* c);
		uint32_t _SortGlyphTable_b__125_0(UnityEngine_TextCoreModule::UnityEngine::TextCore::Glyph* c);
	};
}

