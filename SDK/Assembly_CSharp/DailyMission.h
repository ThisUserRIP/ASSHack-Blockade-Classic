#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace Assembly_CSharp { struct Reward; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };

namespace Assembly_CSharp
{
	struct DailyMission : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t mID;
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::Int32>* target;
		mscorlib::System::Collections::Generic::List_1<mscorlib::System::Int32>* current;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Reward>* reward;
		bool stat;
		void _ctor(int32_t _mID, mscorlib::System::String* _target, mscorlib::System::String* _current, mscorlib::System::String* _reward, int32_t _stat);
	};
}

