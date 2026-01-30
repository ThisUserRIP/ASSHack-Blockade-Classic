#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "Rewired_Data_ConfigVars.h"
namespace Rewired_Core::Rewired::Data { struct ConfigVars; };
#include "Rewired_Platforms_Platform.h"
namespace mscorlib::System { struct Object; };
namespace mscorlib::System { template <typename T, typename TResult> struct Func_2; };
namespace mscorlib::System { template <typename T1, typename T2> struct Action_2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Rewired_Core::Rewired::Data
{
	struct ConfigVars_VBwNqPbTnXcOEyCXzdptvUkmwKy : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Func_2<Rewired_Core::Rewired::Platforms::Platform, mscorlib::System::Object>* OOPdpaaqYInjBLustfZiXZeMOfo;
		mscorlib::System::Action_2<Rewired_Core::Rewired::Platforms::Platform, mscorlib::System::Object>* CckEgsSOnOZIsfeogTafYHYCsus;
		void _ctor(mscorlib::System::Func_2<Rewired_Core::Rewired::Platforms::Platform, mscorlib::System::Object>* getDelegate, mscorlib::System::Action_2<Rewired_Core::Rewired::Platforms::Platform, mscorlib::System::Object>* setDelegate);
	};
}

