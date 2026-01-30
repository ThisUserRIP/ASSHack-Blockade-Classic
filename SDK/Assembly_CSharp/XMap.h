#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace Assembly_CSharp { struct XChunk; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct XMap : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::XChunk>* Chunks;
		mscorlib::System::String* MapName;
		void SetName(mscorlib::System::String* name);
		void Save(mscorlib::System::String* path);
		static Assembly_CSharp::XMap* Load(mscorlib::System::String* path);
		static Assembly_CSharp::XMap* InternalLoad(mscorlib::System::String* levelname);
		void _ctor();
	};
}

