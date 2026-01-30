#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "System_Byte.h"
namespace mscorlib::System { struct Byte; };
#include "System_Globalization_CompareOptions.h"
#include "System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "System_Void.h"
namespace mscorlib::System { struct Void; };
#include "System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { struct Object; };

namespace mscorlib::System::Globalization
{
	struct SortKey : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* source;
		IL2CPP::Array<uint8_t>* key;
		mscorlib::System::Globalization::CompareOptions options;
		int32_t lcid;
		static int32_t Compare(mscorlib::System::Globalization::SortKey* sortkey1, mscorlib::System::Globalization::SortKey* sortkey2);
		void _ctor(int32_t lcid, mscorlib::System::String* source, mscorlib::System::Globalization::CompareOptions opt);
		void _ctor(int32_t lcid, mscorlib::System::String* source, IL2CPP::Array<uint8_t>* buffer, mscorlib::System::Globalization::CompareOptions opt, int32_t lv1Length, int32_t lv2Length, int32_t lv3Length, int32_t kanaSmallLength, int32_t markTypeLength, int32_t katakanaLength, int32_t kanaWidthLength, int32_t identLength);
		mscorlib::System::String* get_OriginalString();
		IL2CPP::Array<uint8_t>* get_KeyData();
		bool Equals(mscorlib::System::Object* value);
		int32_t GetHashCode();
		mscorlib::System::String* ToString();
		void _ctor();
	};
}

