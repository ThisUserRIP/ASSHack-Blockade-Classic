#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_UInt64.h"
namespace mscorlib::System { struct UInt64; };
#include "..\mscorlib\System_IntPtr.h"
namespace mscorlib::System { struct IntPtr; };
namespace mscorlib::System { struct String; };

namespace Assembly_CSharp
{
	struct NovalinkHandler : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		struct StaticFields
		{
			bool WAITING_FOR_TRANSACTION;
			float myTimer;
			int32_t WAITING_AMOUNT;
			int32_t tmpItemID;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		static void Lib_Init(int32_t id);
		static int32_t Lib_LibInit();
		static uint64_t Lib_GetID();
		static intptr_t Lib_GetToken();
		static intptr_t Lib_GetAvatar();
		static void Lib_TradeInit(int32_t pid, int32_t count);
		static intptr_t Lib_GetTransaction();
		static bool Lib_LibConnect();
		static void Lib_Close();
		void Start();
		static void Init();
		static void GetUser();
		static int32_t CheckInit();
		static bool CheckConnection();
		static mscorlib::System::String* GetUserID();
		static mscorlib::System::String* GetUserAvatar();
		static void GetUserToken();
		static void InitTxn(int32_t pID, int32_t count);
		static mscorlib::System::String* GetTxnResult();
		void Update();
		void OnApplicationQuit();
		void _ctor();
		static void _cctor();
	};
}

