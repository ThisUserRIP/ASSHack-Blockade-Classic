#pragma once
#include "..\..\IL2CPP\il2cpp-extern-functions.h"
#include "..\mscorlib\System_Type.h"
namespace mscorlib::System { struct Type; };
#include "Tayx_Graphy_Utils_G_Singleton_1.h"
#include "Tayx_Graphy_GraphyManager_Mode.h"
#include "..\mscorlib\System_Boolean.h"
namespace mscorlib::System { struct Boolean; };
#include "..\UnityEngine_CoreModule\UnityEngine_Color.h"
namespace UnityEngine_CoreModule::UnityEngine { struct Color; };
#include "..\UnityEngine_CoreModule\UnityEngine_KeyCode.h"
#include "Tayx_Graphy_GraphyManager_ModulePosition.h"
#include "Tayx_Graphy_GraphyManager_ModuleState.h"
#include "..\mscorlib\System_Int32.h"
namespace mscorlib::System { struct Int32; };
#include "Tayx_Graphy_GraphyManager_LookForAudioListener.h"
namespace UnityEngine_AudioModule::UnityEngine { struct AudioListener; };
#include "..\UnityEngine_AudioModule\UnityEngine_FFTWindow.h"
namespace Assembly_CSharp::Tayx::Graphy::Fps { struct G_FpsManager; };
namespace Assembly_CSharp::Tayx::Graphy::Ram { struct G_RamManager; };
namespace Assembly_CSharp::Tayx::Graphy::Audio { struct G_AudioManager; };
namespace Assembly_CSharp::Tayx::Graphy::Advanced { struct G_AdvancedData; };
namespace Assembly_CSharp::Tayx::Graphy::Fps { struct G_FpsMonitor; };
namespace Assembly_CSharp::Tayx::Graphy::Ram { struct G_RamMonitor; };
namespace Assembly_CSharp::Tayx::Graphy::Audio { struct G_AudioMonitor; };
#include "Tayx_Graphy_GraphyManager_ModulePreset.h"
#include "..\mscorlib\System_Void.h"
namespace mscorlib::System { struct Void; };
#include "..\mscorlib\System_Single.h"
namespace mscorlib::System { struct Single; };
#include "Tayx_Graphy_GraphyManager_ModuleType.h"

namespace Assembly_CSharp::Tayx::Graphy
{
	struct GraphyManager : Assembly_CSharp::Tayx::Graphy::Utils::G_Singleton_1<Assembly_CSharp::Tayx::Graphy::GraphyManager>
	{
		static IL2CPP::Il2CppClass* GetIl2CppClass();
		static mscorlib::System::Type* GetIl2CppType();
		Assembly_CSharp::Tayx::Graphy::GraphyManager_Mode m_graphyMode;
		bool m_enableOnStartup;
		bool m_keepAlive;
		bool m_background;
		UnityEngine_CoreModule::UnityEngine::Color m_backgroundColor;
		bool m_enableHotkeys;
		UnityEngine_CoreModule::UnityEngine::KeyCode m_toggleModeKeyCode;
		bool m_toggleModeCtrl;
		bool m_toggleModeAlt;
		UnityEngine_CoreModule::UnityEngine::KeyCode m_toggleActiveKeyCode;
		bool m_toggleActiveCtrl;
		bool m_toggleActiveAlt;
		Assembly_CSharp::Tayx::Graphy::GraphyManager_ModulePosition m_graphModulePosition;
		Assembly_CSharp::Tayx::Graphy::GraphyManager_ModuleState m_fpsModuleState;
		int32_t m_timeToResetMinMaxFps;
		UnityEngine_CoreModule::UnityEngine::Color m_goodFpsColor;
		int32_t m_goodFpsThreshold;
		UnityEngine_CoreModule::UnityEngine::Color m_cautionFpsColor;
		int32_t m_cautionFpsThreshold;
		UnityEngine_CoreModule::UnityEngine::Color m_criticalFpsColor;
		int32_t m_fpsGraphResolution;
		int32_t m_fpsTextUpdateRate;
		Assembly_CSharp::Tayx::Graphy::GraphyManager_ModuleState m_ramModuleState;
		UnityEngine_CoreModule::UnityEngine::Color m_allocatedRamColor;
		UnityEngine_CoreModule::UnityEngine::Color m_reservedRamColor;
		UnityEngine_CoreModule::UnityEngine::Color m_monoRamColor;
		int32_t m_ramGraphResolution;
		int32_t m_ramTextUpdateRate;
		Assembly_CSharp::Tayx::Graphy::GraphyManager_ModuleState m_audioModuleState;
		Assembly_CSharp::Tayx::Graphy::GraphyManager_LookForAudioListener m_findAudioListenerInCameraIfNull;
		UnityEngine_AudioModule::UnityEngine::AudioListener* m_audioListener;
		UnityEngine_CoreModule::UnityEngine::Color m_audioGraphColor;
		int32_t m_audioGraphResolution;
		int32_t m_audioTextUpdateRate;
		UnityEngine_AudioModule::UnityEngine::FFTWindow m_FFTWindow;
		int32_t m_spectrumSize;
		Assembly_CSharp::Tayx::Graphy::GraphyManager_ModulePosition m_advancedModulePosition;
		Assembly_CSharp::Tayx::Graphy::GraphyManager_ModuleState m_advancedModuleState;
		bool m_initialized;
		bool m_active;
		bool m_focused;
		Assembly_CSharp::Tayx::Graphy::Fps::G_FpsManager* m_fpsManager;
		Assembly_CSharp::Tayx::Graphy::Ram::G_RamManager* m_ramManager;
		Assembly_CSharp::Tayx::Graphy::Audio::G_AudioManager* m_audioManager;
		Assembly_CSharp::Tayx::Graphy::Advanced::G_AdvancedData* m_advancedData;
		Assembly_CSharp::Tayx::Graphy::Fps::G_FpsMonitor* m_fpsMonitor;
		Assembly_CSharp::Tayx::Graphy::Ram::G_RamMonitor* m_ramMonitor;
		Assembly_CSharp::Tayx::Graphy::Audio::G_AudioMonitor* m_audioMonitor;
		Assembly_CSharp::Tayx::Graphy::GraphyManager_ModulePreset m_modulePresetState;
		void _ctor();
		Assembly_CSharp::Tayx::Graphy::GraphyManager_Mode get_GraphyMode();
		void set_GraphyMode(Assembly_CSharp::Tayx::Graphy::GraphyManager_Mode value);
		bool get_EnableOnStartup();
		bool get_KeepAlive();
		bool get_Background();
		void set_Background(bool value);
		UnityEngine_CoreModule::UnityEngine::Color get_BackgroundColor();
		void set_BackgroundColor(UnityEngine_CoreModule::UnityEngine::Color value);
		Assembly_CSharp::Tayx::Graphy::GraphyManager_ModulePosition get_GraphModulePosition();
		void set_GraphModulePosition(Assembly_CSharp::Tayx::Graphy::GraphyManager_ModulePosition value);
		Assembly_CSharp::Tayx::Graphy::GraphyManager_ModuleState get_FpsModuleState();
		void set_FpsModuleState(Assembly_CSharp::Tayx::Graphy::GraphyManager_ModuleState value);
		int32_t get_TimeToResetMinMaxFps();
		void set_TimeToResetMinMaxFps(int32_t value);
		UnityEngine_CoreModule::UnityEngine::Color get_GoodFPSColor();
		void set_GoodFPSColor(UnityEngine_CoreModule::UnityEngine::Color value);
		UnityEngine_CoreModule::UnityEngine::Color get_CautionFPSColor();
		void set_CautionFPSColor(UnityEngine_CoreModule::UnityEngine::Color value);
		UnityEngine_CoreModule::UnityEngine::Color get_CriticalFPSColor();
		void set_CriticalFPSColor(UnityEngine_CoreModule::UnityEngine::Color value);
		int32_t get_GoodFPSThreshold();
		void set_GoodFPSThreshold(int32_t value);
		int32_t get_CautionFPSThreshold();
		void set_CautionFPSThreshold(int32_t value);
		int32_t get_FpsGraphResolution();
		void set_FpsGraphResolution(int32_t value);
		int32_t get_FpsTextUpdateRate();
		void set_FpsTextUpdateRate(int32_t value);
		float get_CurrentFPS();
		float get_AverageFPS();
		float get_MinFPS();
		float get_MaxFPS();
		Assembly_CSharp::Tayx::Graphy::GraphyManager_ModuleState get_RamModuleState();
		void set_RamModuleState(Assembly_CSharp::Tayx::Graphy::GraphyManager_ModuleState value);
		UnityEngine_CoreModule::UnityEngine::Color get_AllocatedRamColor();
		void set_AllocatedRamColor(UnityEngine_CoreModule::UnityEngine::Color value);
		UnityEngine_CoreModule::UnityEngine::Color get_ReservedRamColor();
		void set_ReservedRamColor(UnityEngine_CoreModule::UnityEngine::Color value);
		UnityEngine_CoreModule::UnityEngine::Color get_MonoRamColor();
		void set_MonoRamColor(UnityEngine_CoreModule::UnityEngine::Color value);
		int32_t get_RamGraphResolution();
		void set_RamGraphResolution(int32_t value);
		int32_t get_RamTextUpdateRate();
		void set_RamTextUpdateRate(int32_t value);
		float get_AllocatedRam();
		float get_ReservedRam();
		float get_MonoRam();
		Assembly_CSharp::Tayx::Graphy::GraphyManager_ModuleState get_AudioModuleState();
		void set_AudioModuleState(Assembly_CSharp::Tayx::Graphy::GraphyManager_ModuleState value);
		UnityEngine_AudioModule::UnityEngine::AudioListener* get_AudioListener();
		void set_AudioListener(UnityEngine_AudioModule::UnityEngine::AudioListener* value);
		Assembly_CSharp::Tayx::Graphy::GraphyManager_LookForAudioListener get_FindAudioListenerInCameraIfNull();
		void set_FindAudioListenerInCameraIfNull(Assembly_CSharp::Tayx::Graphy::GraphyManager_LookForAudioListener value);
		UnityEngine_CoreModule::UnityEngine::Color get_AudioGraphColor();
		void set_AudioGraphColor(UnityEngine_CoreModule::UnityEngine::Color value);
		int32_t get_AudioGraphResolution();
		void set_AudioGraphResolution(int32_t value);
		int32_t get_AudioTextUpdateRate();
		void set_AudioTextUpdateRate(int32_t value);
		UnityEngine_AudioModule::UnityEngine::FFTWindow get_FftWindow();
		void set_FftWindow(UnityEngine_AudioModule::UnityEngine::FFTWindow value);
		int32_t get_SpectrumSize();
		void set_SpectrumSize(int32_t value);
		IL2CPP::Array<float>* get_Spectrum();
		float get_MaxDB();
		Assembly_CSharp::Tayx::Graphy::GraphyManager_ModuleState get_AdvancedModuleState();
		void set_AdvancedModuleState(Assembly_CSharp::Tayx::Graphy::GraphyManager_ModuleState value);
		Assembly_CSharp::Tayx::Graphy::GraphyManager_ModulePosition get_AdvancedModulePosition();
		void set_AdvancedModulePosition(Assembly_CSharp::Tayx::Graphy::GraphyManager_ModulePosition value);
		void Start();
		void Update();
		void OnApplicationFocus(bool isFocused);
		void SetModulePosition(Assembly_CSharp::Tayx::Graphy::GraphyManager_ModuleType moduleType, Assembly_CSharp::Tayx::Graphy::GraphyManager_ModulePosition modulePosition);
		void SetModuleMode(Assembly_CSharp::Tayx::Graphy::GraphyManager_ModuleType moduleType, Assembly_CSharp::Tayx::Graphy::GraphyManager_ModuleState moduleState);
		void ToggleModes();
		void SetPreset(Assembly_CSharp::Tayx::Graphy::GraphyManager_ModulePreset modulePreset);
		void ToggleActive();
		void Enable();
		void Disable();
		void Init();
		void CheckForHotkeyPresses();
		bool CheckFor1KeyPress(UnityEngine_CoreModule::UnityEngine::KeyCode key);
		bool CheckFor2KeyPress(UnityEngine_CoreModule::UnityEngine::KeyCode key1, UnityEngine_CoreModule::UnityEngine::KeyCode key2);
		bool CheckFor3KeyPress(UnityEngine_CoreModule::UnityEngine::KeyCode key1, UnityEngine_CoreModule::UnityEngine::KeyCode key2, UnityEngine_CoreModule::UnityEngine::KeyCode key3);
		void UpdateAllParameters();
		void RefreshAllParameters();
	};
}

