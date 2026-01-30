#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
#include "BestHTTP_Examples_UploadHubSample.h"
namespace Assembly_CSharp::BestHTTP::Examples { struct UploadHubSample; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace mscorlib::System { struct Object; };
namespace Assembly_CSharp::BestHTTP::Examples { struct Person; };
namespace Assembly_CSharp::BestHTTP::SignalRCore { template <typename T> struct StreamItemContainer_1; };
namespace Assembly_CSharp::BestHTTP::SignalRCore { template <typename TResult> struct UploadItemController_1; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Assembly_CSharp::BestHTTP::Examples
{
	struct UploadHubSample__PersonEcho_d__14 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t __1__state;
		mscorlib::System::Object* __2__current;
		Assembly_CSharp::BestHTTP::Examples::UploadHubSample* __4__this;
		Assembly_CSharp::BestHTTP::SignalRCore::UploadItemController_1<Assembly_CSharp::BestHTTP::SignalRCore::StreamItemContainer_1<Assembly_CSharp::BestHTTP::Examples::Person>>* _controller_5__2;
		int32_t _i_5__3;
		void _ctor(int32_t __1__state);
		void System_IDisposable_Dispose();
		bool MoveNext();
		void __m__Finally1();
		mscorlib::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();
		void System_Collections_IEnumerator_Reset();
		mscorlib::System::Object* System_Collections_IEnumerator_get_Current();
	};
}

