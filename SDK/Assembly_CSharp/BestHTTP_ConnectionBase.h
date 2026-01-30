#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\mscorlib\System_Object.h"
namespace mscorlib::System { struct String; };
#include "BestHTTP_HTTPConnectionStates.h"
namespace Assembly_CSharp::BestHTTP { struct HTTPRequest; };
#include "..\mscorlib\System_DateTime.h"
namespace mscorlib::System { struct DateTime; };
namespace System::System { struct Uri; };
namespace Assembly_CSharp::BestHTTP { struct HTTPConnectionRecycledDelegate; };
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::BestHTTP
{
	struct ConnectionBase : mscorlib::System::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		mscorlib::System::String* _ServerAddress_k__BackingField;
		Assembly_CSharp::BestHTTP::HTTPConnectionStates _State_k__BackingField;
		Assembly_CSharp::BestHTTP::HTTPRequest* _CurrentRequest_k__BackingField;
		mscorlib::System::DateTime _StartTime_k__BackingField;
		mscorlib::System::DateTime _TimedOutStart_k__BackingField;
		System::System::Uri* _LastProcessedUri_k__BackingField;
		mscorlib::System::DateTime LastProcessTime;
		Assembly_CSharp::BestHTTP::HTTPConnectionRecycledDelegate* OnConnectionRecycled;
		bool IsThreaded;
		bool _IsDisposed_k__BackingField;
		mscorlib::System::String* get_ServerAddress();
		void set_ServerAddress(mscorlib::System::String* value);
		Assembly_CSharp::BestHTTP::HTTPConnectionStates get_State();
		void set_State(Assembly_CSharp::BestHTTP::HTTPConnectionStates value);
		bool get_IsFree();
		bool get_IsActive();
		Assembly_CSharp::BestHTTP::HTTPRequest* get_CurrentRequest();
		void set_CurrentRequest(Assembly_CSharp::BestHTTP::HTTPRequest* value);
		bool get_IsRemovable();
		mscorlib::System::DateTime get_StartTime();
		void set_StartTime(mscorlib::System::DateTime value);
		mscorlib::System::DateTime get_TimedOutStart();
		void set_TimedOutStart(mscorlib::System::DateTime value);
		bool get_HasProxy();
		System::System::Uri* get_LastProcessedUri();
		void set_LastProcessedUri(System::System::Uri* value);
		void _ctor(mscorlib::System::String* serverAddress);
		void _ctor(mscorlib::System::String* serverAddress, bool threaded);
		void Abort(Assembly_CSharp::BestHTTP::HTTPConnectionStates hTTPConnectionStates);
		void Process(Assembly_CSharp::BestHTTP::HTTPRequest* request);
		void ThreadFunc();
		void HandleProgressCallback();
		void HandleCallback();
		void Recycle(Assembly_CSharp::BestHTTP::HTTPConnectionRecycledDelegate* onConnectionRecycled);
		void RecycleNow();
		bool get_IsDisposed();
		void set_IsDisposed(bool value);
		void Dispose();
		void Dispose(bool disposing);
		void Finalize();
	};
}

