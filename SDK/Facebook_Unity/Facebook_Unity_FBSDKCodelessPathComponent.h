#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct Object; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };

namespace Facebook_Unity::Facebook::Unity
{
	struct FBSDKCodelessPathComponent : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* _className_k__BackingField;
		mscorlib::System::String* _text_k__BackingField;
		mscorlib::System::String* _hint_k__BackingField;
		mscorlib::System::String* _desc_k__BackingField;
		mscorlib::System::String* _tag_k__BackingField;
		int64_t _index_k__BackingField;
		int64_t _section_k__BackingField;
		int64_t _row_k__BackingField;
		int64_t _matchBitmask_k__BackingField;
		void _ctor(mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::Object>* dict);
		mscorlib::System::String* get_className();
		void set_className(mscorlib::System::String* value);
		void set_text(mscorlib::System::String* value);
		void set_hint(mscorlib::System::String* value);
		void set_desc(mscorlib::System::String* value);
		void set_tag(mscorlib::System::String* value);
		void set_index(int64_t value);
		void set_section(int64_t value);
		void set_row(int64_t value);
		void set_matchBitmask(int64_t value);
	};
}

