#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_ScriptableObject.h"
namespace Unity_TextMeshPro::TMPro { struct TMP_Style; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };

namespace Unity_TextMeshPro::TMPro
{
	struct TMP_StyleSheet : UnityEngine_CoreModule::UnityEngine::ScriptableObject
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::List_1<Unity_TextMeshPro::TMPro::TMP_Style>* m_StyleList;
		mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::Int32, Unity_TextMeshPro::TMPro::TMP_Style>* m_StyleLookupDictionary;
		mscorlib::System::Collections::Generic::List_1<Unity_TextMeshPro::TMPro::TMP_Style>* get_styles();
		void Reset();
		Unity_TextMeshPro::TMPro::TMP_Style* GetStyle(int32_t hashCode);
		Unity_TextMeshPro::TMPro::TMP_Style* GetStyle(mscorlib::System::String* name);
		void RefreshStyles();
		void LoadStyleDictionaryInternal();
		void _ctor();
	};
}

