#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Vector3i.h"
namespace Assembly_CSharp { struct Vector3i; };
namespace Assembly_CSharp { struct XBlock; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp
{
	struct XChunk : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::Vector3i pos;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::XBlock>* Blocks;
		void _ctor();
	};
}

