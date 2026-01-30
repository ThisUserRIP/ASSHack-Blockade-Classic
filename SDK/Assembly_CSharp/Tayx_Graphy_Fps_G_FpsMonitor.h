#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "..\UnityEngine_CoreModule\UnityEngine_MonoBehaviour.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
namespace Assembly_CSharp::Tayx::Graphy { struct GraphyManager; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };

namespace Assembly_CSharp::Tayx::Graphy::Fps
{
	struct G_FpsMonitor : UnityEngine_CoreModule::UnityEngine::MonoBehaviour
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		int32_t m_averageSamples;
		Assembly_CSharp::Tayx::Graphy::GraphyManager* m_graphyManager;
		float m_currentFps;
		float m_avgFps;
		float m_minFps;
		float m_maxFps;
		IL2CPP::Array<float>* m_averageFpsSamples;
		int32_t m_avgFpsSamplesOffset;
		int32_t m_indexMask;
		int32_t m_avgFpsSamplesCapacity;
		int32_t m_avgFpsSamplesCount;
		int32_t m_timeToResetMinMaxFps;
		float m_timeToResetMinFpsPassed;
		float m_timeToResetMaxFpsPassed;
		float unscaledDeltaTime;
		float get_CurrentFPS();
		float get_AverageFPS();
		float get_MinFPS();
		float get_MaxFPS();
		void Awake();
		void Update();
		void UpdateParameters();
		void Init();
		void ResizeSamplesBuffer(int32_t size);
		int32_t ToBufferIndex(int32_t index);
		void _ctor();
	};
}

