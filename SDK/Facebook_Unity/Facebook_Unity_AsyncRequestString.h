#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace System::System { struct Uri; };
#include "Facebook_Unity_HttpMethod.h"
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct IDictionary_2; };
namespace UnityEngine_UnityWebRequestModule::UnityEngine { struct WWWForm; };
namespace Facebook_Unity::Facebook::Unity { struct IGraphResult; };
namespace Facebook_Unity::Facebook::Unity { template <typename T> struct FacebookDelegate_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct Dictionary_2; };
namespace mscorlib::System::Collections { struct IEnumerator; };

namespace Facebook_Unity::Facebook::Unity
{
	struct AsyncRequestString : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		System::System::Uri* url;
		Facebook_Unity::Facebook::Unity::HttpMethod method;
		mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::String>* formData;
		UnityEngine_UnityWebRequestModule::UnityEngine::WWWForm* query;
		Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IGraphResult>* callback;
		static void Post(System::System::Uri* url, mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::String>* formData, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IGraphResult>* callback);
		static void Get(System::System::Uri* url, mscorlib::System::Collections::Generic::Dictionary_2<mscorlib::System::String, mscorlib::System::String>* formData, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IGraphResult>* callback);
		static void Request(System::System::Uri* url, Facebook_Unity::Facebook::Unity::HttpMethod method, UnityEngine_UnityWebRequestModule::UnityEngine::WWWForm* query, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IGraphResult>* callback);
		static void Request(System::System::Uri* url, Facebook_Unity::Facebook::Unity::HttpMethod method, mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::String>* formData, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IGraphResult>* callback);
		mscorlib::System::Collections::IEnumerator* Start();
		Facebook_Unity::Facebook::Unity::AsyncRequestString* SetUrl(System::System::Uri* url);
		Facebook_Unity::Facebook::Unity::AsyncRequestString* SetMethod(Facebook_Unity::Facebook::Unity::HttpMethod method);
		Facebook_Unity::Facebook::Unity::AsyncRequestString* SetFormData(mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::String>* formData);
		Facebook_Unity::Facebook::Unity::AsyncRequestString* SetQuery(UnityEngine_UnityWebRequestModule::UnityEngine::WWWForm* query);
		Facebook_Unity::Facebook::Unity::AsyncRequestString* SetCallback(Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IGraphResult>* callback);
		void _ctor();
	};
}

