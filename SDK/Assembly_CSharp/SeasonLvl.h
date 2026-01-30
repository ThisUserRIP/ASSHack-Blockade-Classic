#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp { struct Reward; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace Assembly_CSharp { struct NYMission; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };

namespace Assembly_CSharp
{
	struct SeasonLvl : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t sLVL;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Reward>* freeReward;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Reward>* premiumReward;
		Assembly_CSharp::NYMission* myPoint;
		void _ctor(int32_t _lvl, mscorlib::System::String* _freeRewardRaw, mscorlib::System::String* _premiumRewardRaw);
	};
}

