#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace System::System { struct Uri; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "UnityEngine_Networking_Types_AppID.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Coroutine; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_UInt32.h"
namespace mscorlib::System { struct UInt32; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace UnityEngine_UNETModule::UnityEngine::Networking::Match { struct MatchInfo; };
namespace UnityEngine_UNETModule::UnityEngine::Networking::Match { template <typename T> struct NetworkMatch_DataResponseDelegate_1; };
namespace UnityEngine_UNETModule::UnityEngine::Networking::Match { struct CreateMatchRequest; };
namespace UnityEngine_UNETModule::UnityEngine::Networking::Match { struct CreateMatchResponse; };
#include "UnityEngine_Networking_Types_NetworkID.h"
namespace UnityEngine_UNETModule::UnityEngine::Networking::Match { struct JoinMatchRequest; };
namespace UnityEngine_UNETModule::UnityEngine::Networking::Match { struct JoinMatchResponse; };
namespace UnityEngine_UNETModule::UnityEngine::Networking::Match { struct NetworkMatch_BasicResponseDelegate; };
namespace UnityEngine_UNETModule::UnityEngine::Networking::Match { struct DestroyMatchRequest; };
namespace UnityEngine_UNETModule::UnityEngine::Networking::Match { struct BasicResponse; };
#include "UnityEngine_Networking_Types_NodeID.h"
namespace UnityEngine_UNETModule::UnityEngine::Networking::Match { struct DropConnectionRequest; };
namespace UnityEngine_UNETModule::UnityEngine::Networking::Match { struct DropConnectionResponse; };
namespace UnityEngine_UNETModule::UnityEngine::Networking::Match { struct MatchInfoSnapshot; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace UnityEngine_UNETModule::UnityEngine::Networking::Match { struct ListMatchRequest; };
namespace UnityEngine_UNETModule::UnityEngine::Networking::Match { struct ListMatchResponse; };
namespace UnityEngine_UNETModule::UnityEngine::Networking::Match { struct SetMatchAttributesRequest; };
#include "..\mscorlib\System_Reflection_MethodInfo.h"
namespace mscorlib::System::Collections { struct IEnumerator; };
namespace UnityEngine_UnityWebRequestModule::UnityEngine::Networking { struct UnityWebRequest; };
namespace UnityEngine_UNETModule::UnityEngine::Networking::Match { template <typename T, typename U> struct NetworkMatch_InternalResponseDelegate_2; };

namespace UnityEngine_UNETModule::UnityEngine::Networking::Match
{
	struct NetworkMatch : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::System::Uri* m_BaseUri;
		System::System::Uri* get_baseUri();
		void set_baseUri(System::System::Uri* value);
		void SetProgramAppID(UnityEngine_UNETModule::UnityEngine::Networking::Types::AppID programAppID);
		UnityEngine_CoreModule::UnityEngine::Coroutine* CreateMatch(mscorlib::System::String* matchName, uint32_t matchSize, bool matchAdvertise, mscorlib::System::String* matchPassword, mscorlib::System::String* publicClientAddress, mscorlib::System::String* privateClientAddress, int32_t eloScoreForMatch, int32_t requestDomain, UnityEngine_UNETModule::UnityEngine::Networking::Match::NetworkMatch_DataResponseDelegate_1<UnityEngine_UNETModule::UnityEngine::Networking::Match::MatchInfo>* callback);
		UnityEngine_CoreModule::UnityEngine::Coroutine* CreateMatch(UnityEngine_UNETModule::UnityEngine::Networking::Match::CreateMatchRequest* req, UnityEngine_UNETModule::UnityEngine::Networking::Match::NetworkMatch_DataResponseDelegate_1<UnityEngine_UNETModule::UnityEngine::Networking::Match::MatchInfo>* callback);
		void OnMatchCreate(UnityEngine_UNETModule::UnityEngine::Networking::Match::CreateMatchResponse* response, UnityEngine_UNETModule::UnityEngine::Networking::Match::NetworkMatch_DataResponseDelegate_1<UnityEngine_UNETModule::UnityEngine::Networking::Match::MatchInfo>* userCallback);
		UnityEngine_CoreModule::UnityEngine::Coroutine* JoinMatch(UnityEngine_UNETModule::UnityEngine::Networking::Types::NetworkID netId, mscorlib::System::String* matchPassword, mscorlib::System::String* publicClientAddress, mscorlib::System::String* privateClientAddress, int32_t eloScoreForClient, int32_t requestDomain, UnityEngine_UNETModule::UnityEngine::Networking::Match::NetworkMatch_DataResponseDelegate_1<UnityEngine_UNETModule::UnityEngine::Networking::Match::MatchInfo>* callback);
		UnityEngine_CoreModule::UnityEngine::Coroutine* JoinMatch(UnityEngine_UNETModule::UnityEngine::Networking::Match::JoinMatchRequest* req, UnityEngine_UNETModule::UnityEngine::Networking::Match::NetworkMatch_DataResponseDelegate_1<UnityEngine_UNETModule::UnityEngine::Networking::Match::MatchInfo>* callback);
		void OnMatchJoined(UnityEngine_UNETModule::UnityEngine::Networking::Match::JoinMatchResponse* response, UnityEngine_UNETModule::UnityEngine::Networking::Match::NetworkMatch_DataResponseDelegate_1<UnityEngine_UNETModule::UnityEngine::Networking::Match::MatchInfo>* userCallback);
		UnityEngine_CoreModule::UnityEngine::Coroutine* DestroyMatch(UnityEngine_UNETModule::UnityEngine::Networking::Types::NetworkID netId, int32_t requestDomain, UnityEngine_UNETModule::UnityEngine::Networking::Match::NetworkMatch_BasicResponseDelegate* callback);
		UnityEngine_CoreModule::UnityEngine::Coroutine* DestroyMatch(UnityEngine_UNETModule::UnityEngine::Networking::Match::DestroyMatchRequest* req, UnityEngine_UNETModule::UnityEngine::Networking::Match::NetworkMatch_BasicResponseDelegate* callback);
		void OnMatchDestroyed(UnityEngine_UNETModule::UnityEngine::Networking::Match::BasicResponse* response, UnityEngine_UNETModule::UnityEngine::Networking::Match::NetworkMatch_BasicResponseDelegate* userCallback);
		UnityEngine_CoreModule::UnityEngine::Coroutine* DropConnection(UnityEngine_UNETModule::UnityEngine::Networking::Types::NetworkID netId, UnityEngine_UNETModule::UnityEngine::Networking::Types::NodeID dropNodeId, int32_t requestDomain, UnityEngine_UNETModule::UnityEngine::Networking::Match::NetworkMatch_BasicResponseDelegate* callback);
		UnityEngine_CoreModule::UnityEngine::Coroutine* DropConnection(UnityEngine_UNETModule::UnityEngine::Networking::Match::DropConnectionRequest* req, UnityEngine_UNETModule::UnityEngine::Networking::Match::NetworkMatch_BasicResponseDelegate* callback);
		void OnDropConnection(UnityEngine_UNETModule::UnityEngine::Networking::Match::DropConnectionResponse* response, UnityEngine_UNETModule::UnityEngine::Networking::Match::NetworkMatch_BasicResponseDelegate* userCallback);
		UnityEngine_CoreModule::UnityEngine::Coroutine* ListMatches(int32_t startPageNumber, int32_t resultPageSize, mscorlib::System::String* matchNameFilter, bool filterOutPrivateMatchesFromResults, int32_t eloScoreTarget, int32_t requestDomain, UnityEngine_UNETModule::UnityEngine::Networking::Match::NetworkMatch_DataResponseDelegate_1<mscorlib::System::Collections::Generic::List_1<UnityEngine_UNETModule::UnityEngine::Networking::Match::MatchInfoSnapshot>>* callback);
		UnityEngine_CoreModule::UnityEngine::Coroutine* ListMatches(UnityEngine_UNETModule::UnityEngine::Networking::Match::ListMatchRequest* req, UnityEngine_UNETModule::UnityEngine::Networking::Match::NetworkMatch_DataResponseDelegate_1<mscorlib::System::Collections::Generic::List_1<UnityEngine_UNETModule::UnityEngine::Networking::Match::MatchInfoSnapshot>>* callback);
		void OnMatchList(UnityEngine_UNETModule::UnityEngine::Networking::Match::ListMatchResponse* response, UnityEngine_UNETModule::UnityEngine::Networking::Match::NetworkMatch_DataResponseDelegate_1<mscorlib::System::Collections::Generic::List_1<UnityEngine_UNETModule::UnityEngine::Networking::Match::MatchInfoSnapshot>>* userCallback);
		UnityEngine_CoreModule::UnityEngine::Coroutine* SetMatchAttributes(UnityEngine_UNETModule::UnityEngine::Networking::Types::NetworkID networkId, bool isListed, int32_t requestDomain, UnityEngine_UNETModule::UnityEngine::Networking::Match::NetworkMatch_BasicResponseDelegate* callback);
		UnityEngine_CoreModule::UnityEngine::Coroutine* SetMatchAttributes(UnityEngine_UNETModule::UnityEngine::Networking::Match::SetMatchAttributesRequest* req, UnityEngine_UNETModule::UnityEngine::Networking::Match::NetworkMatch_BasicResponseDelegate* callback);
		void OnSetMatchAttributes(UnityEngine_UNETModule::UnityEngine::Networking::Match::BasicResponse* response, UnityEngine_UNETModule::UnityEngine::Networking::Match::NetworkMatch_BasicResponseDelegate* userCallback);
		template <typename JSONRESPONSE, typename USERRESPONSEDELEGATETYPE> mscorlib::System::Collections::IEnumerator* ProcessMatchResponse(UnityEngine_UnityWebRequestModule::UnityEngine::Networking::UnityWebRequest* client, UnityEngine_UNETModule::UnityEngine::Networking::Match::NetworkMatch_InternalResponseDelegate_2<JSONRESPONSE, USERRESPONSEDELEGATETYPE>* internalCallback, USERRESPONSEDELEGATETYPE* userCallback)
		{
			static const IL2CPP::MethodInfo* address = GetIl2CppMethod(GetIl2CppClass(), "ProcessMatchResponse", std::vector<std::string> { "UnityEngine.Networking.UnityWebRequest", "UnityEngine.Networking.Match.NetworkMatch/InternalResponseDelegate`2<JSONRESPONSE,USERRESPONSEDELEGATETYPE>", GetGenericTypeName<USERRESPONSEDELEGATETYPE>() });
			mscorlib::System::Reflection::MethodInfo* method = (mscorlib::System::Reflection::MethodInfo*)il2cpp_method_get_object(address, GetIl2CppClass());
			IL2CPP::Array<mscorlib::System::Type*>* typeArguments = MakeArray<mscorlib::System::Type>(2);
			typeArguments->vector[0] = JSONRESPONSE::GetIl2CppType();
			typeArguments->vector[1] = USERRESPONSEDELEGATETYPE::GetIl2CppType();
			const IL2CPP::Il2CppReflectionMethod* reflectionMethod = (const IL2CPP::Il2CppReflectionMethod*)method->MakeGenericMethod(typeArguments);
			const IL2CPP::MethodInfo* genericAddress = il2cpp_method_get_from_reflection(reflectionMethod);
			intptr_t* params = new intptr_t[3];
			params[0] = (intptr_t)client;
			params[1] = (intptr_t)internalCallback;
			params[2] = (intptr_t)userCallback;
			Il2CppException* Il2CppException = nullptr;
			IL2CPP::Il2CppObject* returnValue = il2cpp_runtime_invoke(genericAddress, this, (void**)params, &Il2CppException);
			delete [] params;
			Il2CppExceptionMessage(Il2CppException);
			return (mscorlib::System::Collections::IEnumerator*)returnValue;
		}
		void _ctor();
	};
}

