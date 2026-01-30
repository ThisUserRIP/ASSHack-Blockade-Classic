#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
namespace System::System { struct Uri; };
#include "Facebook_Unity_HttpMethod.h"
namespace UnityEngine_UnityWebRequestModule::UnityEngine { struct WWWForm; };
namespace Facebook_Unity::Facebook::Unity { struct IGraphResult; };
namespace Facebook_Unity::Facebook::Unity { template <typename T> struct FacebookDelegate_1; };
namespace mscorlib::System { struct String; };
namespace mscorlib::System::Collections::Generic { template <typename TKey, typename TValue> struct IDictionary_2; };

namespace Facebook_Unity::Facebook::Unity
{
	struct AsyncRequestStringWrapper : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		void Request(System::System::Uri* url, Facebook_Unity::Facebook::Unity::HttpMethod method, UnityEngine_UnityWebRequestModule::UnityEngine::WWWForm* query, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IGraphResult>* callback);
		void Request(System::System::Uri* url, Facebook_Unity::Facebook::Unity::HttpMethod method, mscorlib::System::Collections::Generic::IDictionary_2<mscorlib::System::String, mscorlib::System::String>* formData, Facebook_Unity::Facebook::Unity::FacebookDelegate_1<Facebook_Unity::Facebook::Unity::IGraphResult>* callback);
		void _ctor();
	};
}

