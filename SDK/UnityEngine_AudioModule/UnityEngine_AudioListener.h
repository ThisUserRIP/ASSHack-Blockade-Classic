#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "UnityEngine_AudioBehaviour.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "UnityEngine_FFTWindow.h"

namespace UnityEngine_AudioModule::UnityEngine
{
	struct AudioListener : UnityEngine_AudioModule::UnityEngine::AudioBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		static void GetOutputDataHelper(IL2CPP::Array<float>* samples, int32_t channel);
		static void GetSpectrumDataHelper(IL2CPP::Array<float>* samples, int32_t channel, UnityEngine_AudioModule::UnityEngine::FFTWindow window);
		static float get_volume();
		static void set_volume(float value);
		static void GetOutputData(IL2CPP::Array<float>* samples, int32_t channel);
		static void GetSpectrumData(IL2CPP::Array<float>* samples, int32_t channel, UnityEngine_AudioModule::UnityEngine::FFTWindow window);
	};
}

