#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp { struct CServerData; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\UnityEngine_CoreModule\UnityEngine_Vector2.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Vector2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace Assembly_CSharp::BestHTTP { struct HTTPRequest; };
namespace Assembly_CSharp::BestHTTP { struct HTTPResponse; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections { struct IEnumerator; };
#include "..\UnityEngine_CoreModule\UnityEngine_Rect.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Rect; };
namespace UnityEngine_CoreModule::UnityEngine { struct Texture2D; };
#include "..\mscorlib\System_Reflection_MethodInfo.h"

namespace Assembly_CSharp
{
	struct ServerList : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		bool Active;
		int32_t drawmode;
		int32_t drawfilter;
		int32_t drawcountryfilter;
		int32_t type;
		IL2CPP::Array<bool>* hovermode;
		IL2CPP::Array<bool>* hoverleftmenu;
		IL2CPP::Array<bool>* filtercountryBTN;
		mscorlib::System::Collections::Generic::List_1<Assembly_CSharp::CServerData>* srvlist;
		float next_update;
		IL2CPP::Array<bool>* gamemode;
		bool loading_data;
		int32_t x_pos;
		int32_t y_pos;
		UnityEngine_CoreModule::UnityEngine::Vector2 scrollViewVector;
		bool bh;
		float request;
		struct StaticFields
		{
			Assembly_CSharp::ServerList* THIS__;
			bool online_friends_loaded;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void Awake();
		void myGlobalInit();
		void Update();
		void OnRecvServersList(Assembly_CSharp::BestHTTP::HTTPRequest* req, Assembly_CSharp::BestHTTP::HTTPResponse* resp);
		void OnGUI();
		void DoWindow(int32_t windowID);
		void DrawServer(Assembly_CSharp::CServerData* server);
		void DrawFriendServer(IL2CPP::Array<mscorlib::System::String*>* _fInfo, Assembly_CSharp::CServerData* server);
		void DrawMode(mscorlib::System::String* name, int32_t x, int32_t y, int32_t id);
		void DrawCreateServer();
		mscorlib::System::Collections::IEnumerator* create_server();
		bool DrawButton(UnityEngine_CoreModule::UnityEngine::Rect r, UnityEngine_CoreModule::UnityEngine::Texture2D* tex, UnityEngine_CoreModule::UnityEngine::Texture2D* tex2, mscorlib::System::String* text, UnityEngine_CoreModule::UnityEngine::Texture2D* icon, bool sel, bool presel, int32_t id);
		template <typename T> void ShuffleList(mscorlib::System::Collections::Generic::List_1<T>* list)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ShuffleList", std::vector<std::string> { "System.Collections.Generic.List`1<T>" });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(1);
			typeArguments->vector[0] = T::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[1];
			params[0] = (intptr_t)list;
			Il2CppException* Il2CppException = nullptr;
			il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
		}
		void _ctor();
		static void _cctor();
	};
}

