#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace Assembly_CSharp { struct Messages_CMsg; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace Assembly_CSharp { struct Client; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace Assembly_CSharp
{
	struct Messages : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Messages_CMsg>* msglist;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::Messages_CMsg>* sysmsglist;
		Assembly_CSharp::Client* cscl;
		void OnGUI();
		void Add(mscorlib::System::String* text, float time, bool clear);
		mscorlib::System::String* getTextBySec(int32_t sec);
		void set_message(int32_t msgid, int32_t param);
		void AddSysMsg(int32_t mID, int32_t param, float time, bool clear);
		void _ctor();
	};
}

