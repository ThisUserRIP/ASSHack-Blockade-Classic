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
namespace mscorlib::System { struct String; };
namespace Assembly_CSharp::BestHTTP::SignalRCore { template <typename TResult> struct UploadItemController_1; };
namespace Assembly_CSharp::BestHTTP::SignalRCore { template <typename TResult, typename T> struct UploadChannel_2; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };

namespace Assembly_CSharp::BestHTTP::Examples
{
	struct UploadHubSample__ScoreTrackerWithParameterChannels_d__12 : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t __1__state;
		mscorlib::System::Object* __2__current;
		Assembly_CSharp::BestHTTP::Examples::UploadHubSample* __4__this;
		Assembly_CSharp::BestHTTP::SignalRCore::UploadItemController_1<mscorlib::System::String>* _controller_5__2;
		Assembly_CSharp::BestHTTP::SignalRCore::UploadChannel_2<mscorlib::System::String, mscorlib::System::Int32>* _player1param_5__3;
		int32_t _i_5__4;
		void _ctor(int32_t __1__state);
		void System_IDisposable_Dispose();
		bool MoveNext();
		void __m__Finally1();
		void __m__Finally2();
		void __m__Finally3();
		mscorlib::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current();
		void System_Collections_IEnumerator_Reset();
		mscorlib::System::Object* System_Collections_IEnumerator_get_Current();
	};
}

