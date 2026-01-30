#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace System_Xml::System::Xml::Xsl::Runtime
{
	struct StringConcat
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* s1;
		mscorlib::System::String* s2;
		mscorlib::System::String* s3;
		mscorlib::System::String* s4;
		mscorlib::System::String* delimiter;
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* strList;
		int32_t idxStr;
		void Clear();
		int32_t get_Count();
		mscorlib::System::String* GetResult();
		void ConcatNoDelimiter(mscorlib::System::String* s);
	};
}

