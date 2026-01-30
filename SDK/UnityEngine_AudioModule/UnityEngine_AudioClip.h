#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_Object.h"
namespace UnityEngine_AudioModule::UnityEngine { struct AudioClip_PCMReaderCallback; };
namespace UnityEngine_AudioModule::UnityEngine { struct AudioClip_PCMSetPositionCallback; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };

namespace UnityEngine_AudioModule::UnityEngine
{
	struct AudioClip : UnityEngine_CoreModule::UnityEngine::Object
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		UnityEngine_AudioModule::UnityEngine::AudioClip_PCMReaderCallback* m_PCMReaderCallback;
		UnityEngine_AudioModule::UnityEngine::AudioClip_PCMSetPositionCallback* m_PCMSetPositionCallback;
		void _ctor();
		float get_length();
		void InvokePCMReaderCallback_Internal(IL2CPP::Array<float>* data);
		void InvokePCMSetPositionCallback_Internal(int32_t position);
	};
}

