#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_Behaviour.h"
namespace UnityEngine_VideoModule::UnityEngine::Video { struct VideoPlayer_EventHandler; };
namespace UnityEngine_VideoModule::UnityEngine::Video { struct VideoPlayer_ErrorEventHandler; };
namespace UnityEngine_VideoModule::UnityEngine::Video { struct VideoPlayer_TimeEventHandler; };
namespace UnityEngine_VideoModule::UnityEngine::Video { struct VideoPlayer_FrameReadyEventHandler; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Int64.h"
namespace mscorlib::System { struct Int64; };
namespace mscorlib::System { struct String; };
#include "..\mscorlib\System_Double.h"
namespace mscorlib::System { struct Double; };

namespace UnityEngine_VideoModule::UnityEngine::Video
{
	struct VideoPlayer : UnityEngine_CoreModule::UnityEngine::Behaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_VideoModule::UnityEngine::Video::VideoPlayer_EventHandler* prepareCompleted;
		UnityEngine_VideoModule::UnityEngine::Video::VideoPlayer_EventHandler* loopPointReached;
		UnityEngine_VideoModule::UnityEngine::Video::VideoPlayer_EventHandler* started;
		UnityEngine_VideoModule::UnityEngine::Video::VideoPlayer_EventHandler* frameDropped;
		UnityEngine_VideoModule::UnityEngine::Video::VideoPlayer_ErrorEventHandler* errorReceived;
		UnityEngine_VideoModule::UnityEngine::Video::VideoPlayer_EventHandler* seekCompleted;
		UnityEngine_VideoModule::UnityEngine::Video::VideoPlayer_TimeEventHandler* clockResyncOccurred;
		UnityEngine_VideoModule::UnityEngine::Video::VideoPlayer_FrameReadyEventHandler* frameReady;
		static void InvokePrepareCompletedCallback_Internal(UnityEngine_VideoModule::UnityEngine::Video::VideoPlayer* source);
		static void InvokeFrameReadyCallback_Internal(UnityEngine_VideoModule::UnityEngine::Video::VideoPlayer* source, int64_t frameIdx);
		static void InvokeLoopPointReachedCallback_Internal(UnityEngine_VideoModule::UnityEngine::Video::VideoPlayer* source);
		static void InvokeStartedCallback_Internal(UnityEngine_VideoModule::UnityEngine::Video::VideoPlayer* source);
		static void InvokeFrameDroppedCallback_Internal(UnityEngine_VideoModule::UnityEngine::Video::VideoPlayer* source);
		static void InvokeErrorReceivedCallback_Internal(UnityEngine_VideoModule::UnityEngine::Video::VideoPlayer* source, mscorlib::System::String* errorStr);
		static void InvokeSeekCompletedCallback_Internal(UnityEngine_VideoModule::UnityEngine::Video::VideoPlayer* source);
		static void InvokeClockResyncOccurredCallback_Internal(UnityEngine_VideoModule::UnityEngine::Video::VideoPlayer* source, double seconds);
	};
}

