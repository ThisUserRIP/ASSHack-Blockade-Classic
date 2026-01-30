#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp::BestHTTP { struct HTTPRequest; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Byte.h"
namespace mscorlib::System { struct Byte; };
namespace mscorlib::System::Collections::Generic { template <typename T> struct List_1; };
namespace Assembly_CSharp::BestHTTP { struct HTTPResponse; };

namespace Assembly_CSharp::BestHTTP::Examples
{
	struct LargeFileDownloadSample : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::BestHTTP::HTTPRequest* request;
		mscorlib::System::String* status;
		float progress;
		int32_t fragmentSize;
		struct StaticFields
		{
			mscorlib::System::String* URL;
		};
		static StaticFields* GetStaticFields() { return reinterpret_cast<StaticFields*>(GetIl2CppClass()->static_fields); }
		void Awake();
		void OnDestroy();
		void OnGUI();
		void StreamLargeFileTest();
		void ProcessFragments(mscorlib::System::Collections::Generic::List_1<IL2CPP::Array<mscorlib::System::Byte>>* fragments);
		void _ctor();
		void _OnGUI_b__7_0();
		void _StreamLargeFileTest_b__8_0(Assembly_CSharp::BestHTTP::HTTPRequest* req, Assembly_CSharp::BestHTTP::HTTPResponse* resp);
	};
}

