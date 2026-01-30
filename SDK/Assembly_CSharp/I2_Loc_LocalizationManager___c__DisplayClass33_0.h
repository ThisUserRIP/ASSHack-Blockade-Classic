#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "I2_Loc_LocalizationManager.h"
namespace Assembly_CSharp::I2::Loc { struct LocalizationManager; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
namespace mscorlib::System { template <typename T, typename TResult> struct Func_2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::I2::Loc
{
	struct LocalizationManager___c__DisplayClass33_0 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::String>* Languages;
		mscorlib::System::Func_2<mscorlib::System::String, mscorlib::System::Boolean>* __9__0;
		void _ctor();
		bool _GetAllLanguages_b__0(mscorlib::System::String* x);
	};
}

