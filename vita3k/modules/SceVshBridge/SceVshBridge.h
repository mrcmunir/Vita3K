// Vita3K emulator project
// Copyright (C) 2023 Vita3K team
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License along
// with this program; if not, write to the Free Software Foundation, Inc.,
// 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.

#pragma once

#include <module/module.h>

BRIDGE_DECL(_vshAppMgrAcInstGetAcdirParam)
BRIDGE_DECL(_vshAppMgrBgdlSetQueueStatus)
BRIDGE_DECL(_vshAppMgrCheckPfsMounted)
BRIDGE_DECL(_vshAppMgrCloudDataCreateHeader)
BRIDGE_DECL(_vshAppMgrCloudDataDstCreateMount)
BRIDGE_DECL(_vshAppMgrCloudDataGetMcId)
BRIDGE_DECL(_vshAppMgrCloudDataSetMcId)
BRIDGE_DECL(_vshAppMgrCloudDataSetupKey)
BRIDGE_DECL(_vshAppMgrCloudDataSrcMount)
BRIDGE_DECL(_vshAppMgrCloudDataVerifyHeader)
BRIDGE_DECL(_vshAppMgrFakeSaveDataCreateMount)
BRIDGE_DECL(_vshAppMgrIsExclusiveProcessRunning)
BRIDGE_DECL(_vshAppMgrLocalBackupGetOfflineId)
BRIDGE_DECL(_vshAppMgrLocalBackupVerifyOfflineHeader)
BRIDGE_DECL(_vshAppMgrRegisterPath)
BRIDGE_DECL(_vshAppMgrSaveDataLocalBackupTargetGetList)
BRIDGE_DECL(_vshAppMgrSaveDataLocalBackupTargetRemoveItem)
BRIDGE_DECL(_vshAppMgrSaveDataNotifyBackupFinished)
BRIDGE_DECL(_vshAppMgrSystemParamDateTimeSetConf)
BRIDGE_DECL(_vshAppMgrUpdateRifInfo)
BRIDGE_DECL(_vshCoredumpCafCreateIv)
BRIDGE_DECL(_vshCoredumpCafHeaderFinal)
BRIDGE_DECL(_vshCoredumpCafHeaderTransform)
BRIDGE_DECL(_vshCoredumpCafSegmentFinal)
BRIDGE_DECL(_vshCoredumpCafSegmentInit)
BRIDGE_DECL(_vshCoredumpCafSegmentTransform)
BRIDGE_DECL(_vshCoredumpCreateDump)
BRIDGE_DECL(_vshDisplayGetActualViewportConf)
BRIDGE_DECL(_vshDisplaySetViewportConf)
BRIDGE_DECL(_vshEventLogPut)
BRIDGE_DECL(_vshIdStorageCreateAtomicLeaves)
BRIDGE_DECL(_vshIoChstat)
BRIDGE_DECL(_vshIoDread)
BRIDGE_DECL(_vshIoGetstat)
BRIDGE_DECL(_vshIoMount)
BRIDGE_DECL(_vshKernelGetCompiledSdkVersionByPid)
BRIDGE_DECL(_vshKernelSearchModuleByName)
BRIDGE_DECL(_vshKernelShutdownSystem)
BRIDGE_DECL(_vshLedSetMode)
BRIDGE_DECL(_vshNpDrmEbootSigConvert)
BRIDGE_DECL(_vshNpDrmEbootSigGenMultiDisc)
BRIDGE_DECL(_vshNpDrmEbootSigGenPs1)
BRIDGE_DECL(_vshNpDrmEbootSigGenPsp)
BRIDGE_DECL(_vshNpDrmEbootSigVerify)
BRIDGE_DECL(_vshNpDrmGetLegacyDocKey)
BRIDGE_DECL(_vshNpDrmPspEbootSigGen)
BRIDGE_DECL(_vshNpDrmPspEbootVerify)
BRIDGE_DECL(_vshPowerSetBatteryFakeStatus)
BRIDGE_DECL(_vshRtcGetAlarmTick)
BRIDGE_DECL(_vshRtcGetCurrentSecureTick)
BRIDGE_DECL(_vshRtcGetSecureAlarmTick)
BRIDGE_DECL(_vshRtcSetAlarmTick)
BRIDGE_DECL(_vshRtcSetCurrentDebugNetworkTick)
BRIDGE_DECL(_vshRtcSetCurrentNetworkTick)
BRIDGE_DECL(_vshRtcSetCurrentSecureTick)
BRIDGE_DECL(_vshRtcSetCurrentTick)
BRIDGE_DECL(_vshRtcSetSecureAlarmTick)
BRIDGE_DECL(_vshSDfCtlSetBootParameter)
BRIDGE_DECL(_vshSblAimgrGetConsoleId)
BRIDGE_DECL(_vshSblAimgrGetPscode)
BRIDGE_DECL(_vshSblAimgrGetPscode2)
BRIDGE_DECL(_vshSblAimgrGetSMI)
BRIDGE_DECL(_vshSblAimgrGetVisibleId)
BRIDGE_DECL(_vshSblAuthMgrVerifySpsfo)
BRIDGE_DECL(_vshSblGcAuthMgrMlnpsnlAuth1)
BRIDGE_DECL(_vshSblGcAuthMgrMlnpsnlAuth2)
BRIDGE_DECL(_vshSblGetSystemSwVersion)
BRIDGE_DECL(_vshSblSsCreatePassPhrase)
BRIDGE_DECL(_vshSblSsDecryptWithPortability)
BRIDGE_DECL(_vshSblSsEncryptWithPortability)
BRIDGE_DECL(_vshSblSsGenerateAppKey)
BRIDGE_DECL(_vshSblSsGetNvsData)
BRIDGE_DECL(_vshSblSsSetNvsData)
BRIDGE_DECL(_vshSysconCtrlManualChargeMode)
BRIDGE_DECL(_vshSysconGetHardwareInfo)
BRIDGE_DECL(_vshSysconGetHardwareInfo2)
BRIDGE_DECL(_vshSysconGetManualChargeMode)
BRIDGE_DECL(_vshSysconGetManufacturesStatus)
BRIDGE_DECL(_vshSysconGetTemperatureLog)
BRIDGE_DECL(_vshSysconGetUsbDetStatus)
BRIDGE_DECL(_vshSysconLogReadData)
BRIDGE_DECL(_vshTouchSetTouchEmulationData)
BRIDGE_DECL(vshAppMgrCheckContentInstallPeriod)
BRIDGE_DECL(vshAppMgrCloudDataClearMcId)
BRIDGE_DECL(vshAppMgrDebugSettingNotifyUpdate)
BRIDGE_DECL(vshAppMgrGetPfsProcessStatus)
BRIDGE_DECL(vshCoredumpCafContextCreate)
BRIDGE_DECL(vshCoredumpCafContextDestroy)
BRIDGE_DECL(vshCoredumpCafFinal)
BRIDGE_DECL(vshCoredumpCafHeaderInit)
BRIDGE_DECL(vshCoredumpCafInit)
BRIDGE_DECL(vshCoredumpDeleteCrashReportCaf)
BRIDGE_DECL(vshCtrlChangePortAssign)
BRIDGE_DECL(vshCtrlGetActiveControllerPort)
BRIDGE_DECL(vshCtrlIsBdRemoconConnected)
BRIDGE_DECL(vshCtrlRegisterNotifyCallBack)
BRIDGE_DECL(vshCtrlSetIdleCancelKey)
BRIDGE_DECL(vshCtrlSetIdleCancelThreshold)
BRIDGE_DECL(vshCtrlSetTurnOffInterval)
BRIDGE_DECL(vshCtrlSetVibrationSetting)
BRIDGE_DECL(vshCtrlUnregisterNotifyCallBack)
BRIDGE_DECL(vshDisplayRegisterFrameBufCallback)
BRIDGE_DECL(vshDisplaySetInvertColors)
BRIDGE_DECL(vshHdmiCecCmdForcedPollingMsg)
BRIDGE_DECL(vshHdmiDisableCec)
BRIDGE_DECL(vshHdmiEnableCec)
BRIDGE_DECL(vshIdStorageCreateLeaf)
BRIDGE_DECL(vshIdStorageDeleteLeaf)
BRIDGE_DECL(vshIdStorageFlush)
BRIDGE_DECL(vshIdStorageFormat)
BRIDGE_DECL(vshIdStorageGetFreeLeaves)
BRIDGE_DECL(vshIdStorageGetLeafSize)
BRIDGE_DECL(vshIdStorageIsDirty)
BRIDGE_DECL(vshIdStorageIsFormatted)
BRIDGE_DECL(vshIdStorageIsReadOnly)
BRIDGE_DECL(vshIdStorageLookup)
BRIDGE_DECL(vshIdStorageReadLeaf)
BRIDGE_DECL(vshIdStorageRestart)
BRIDGE_DECL(vshIdStorageUnformat)
BRIDGE_DECL(vshIdStorageUpdate)
BRIDGE_DECL(vshIdStorageWriteLeaf)
BRIDGE_DECL(vshIoClearErrorEvent)
BRIDGE_DECL(vshIoCreateErrorEvent)
BRIDGE_DECL(vshIoCreateMountEvent)
BRIDGE_DECL(vshIoDeleteErrorEvent)
BRIDGE_DECL(vshIoDeleteMountEvent)
BRIDGE_DECL(vshIoFlock)
BRIDGE_DECL(vshIoGetProcessDefaultPriorityForSystem)
BRIDGE_DECL(vshIoSetProcessDefaultPriorityForSystem)
BRIDGE_DECL(vshIoUmount)
BRIDGE_DECL(vshKernelCheckModelCapability)
BRIDGE_DECL(vshKernelDisableAutoClockDown)
BRIDGE_DECL(vshKernelEnableAutoClockDown)
BRIDGE_DECL(vshKernelSendSysEvent)
BRIDGE_DECL(vshMemoryCardEnableSlowMode)
BRIDGE_DECL(vshMemoryCardGetCardInsertState)
BRIDGE_DECL(vshMotionNoiseFilterIsAvailable)
BRIDGE_DECL(vshMsifGetMsInfo)
BRIDGE_DECL(vshNpDrmIsLooseAccountBind)
BRIDGE_DECL(vshNpDrmUpdateAccountId)
BRIDGE_DECL(vshNpDrmUpdateDebugSettings)
BRIDGE_DECL(vshPowerGetWakeupFactor)
BRIDGE_DECL(vshPowerRequestColdReset)
BRIDGE_DECL(vshPowerRequestHibernate)
BRIDGE_DECL(vshPowerSetPowerSwMode)
BRIDGE_DECL(vshPowerSetPsButtonPushTime)
BRIDGE_DECL(vshPowerSetStandbyButtonPushTime)
BRIDGE_DECL(vshRemovableMemoryGetCardInsertState)
BRIDGE_DECL(vshRtcIsAlarmed)
BRIDGE_DECL(vshRtcIsSecureAlarmed)
BRIDGE_DECL(vshRtcRegisterCallback)
BRIDGE_DECL(vshRtcRegisterSecureAlarmCallback)
BRIDGE_DECL(vshRtcSetConf)
BRIDGE_DECL(vshRtcUnregisterCallback)
BRIDGE_DECL(vshRtcUnregisterSecureAlarmCallback)
BRIDGE_DECL(vshSblACMgrHasCapability)
BRIDGE_DECL(vshSblAimgrIsCEX)
BRIDGE_DECL(vshSblAimgrIsDEX)
BRIDGE_DECL(vshSblAimgrIsDolce)
BRIDGE_DECL(vshSblAimgrIsGenuineDolce)
BRIDGE_DECL(vshSblAimgrIsGenuineVITA)
BRIDGE_DECL(vshSblAimgrIsTest)
BRIDGE_DECL(vshSblAimgrIsTool)
BRIDGE_DECL(vshSblAimgrIsVITA)
BRIDGE_DECL(vshSblPmMgrSetSdModeOff)
BRIDGE_DECL(vshSblQafMgrIsAllowControlIduAutoUpdate)
BRIDGE_DECL(vshSblQafMgrIsAllowDtcpIpReset)
BRIDGE_DECL(vshSblQafMgrIsAllowFakeACInstall)
BRIDGE_DECL(vshSblQafMgrIsAllowKeepCoreFile)
BRIDGE_DECL(vshSblQafMgrIsAllowLiblocationChangeModel)
BRIDGE_DECL(vshSblQafMgrIsAllowLoadMagicGate)
BRIDGE_DECL(vshSblQafMgrIsAllowLoadPSPEmuWhiteList)
BRIDGE_DECL(vshSblQafMgrIsAllowMarlinTest)
BRIDGE_DECL(vshSblQafMgrIsAllowNearTest)
BRIDGE_DECL(vshSblQafMgrIsAllowPSPEmuDeleteParameter)
BRIDGE_DECL(vshSblQafMgrIsAllowPSPEmuScreenShot)
BRIDGE_DECL(vshSblQafMgrIsAllowPSPEmuSelectNPEnv)
BRIDGE_DECL(vshSblQafMgrIsAllowPSPEmuShowQAInfo)
BRIDGE_DECL(vshSblQafMgrIsAllowRemotePlayDebug)
BRIDGE_DECL(vshSblQafMgrIsAllowShowTitleUpgradeInfo)
BRIDGE_DECL(vshSblQafMgrIsAllowSystemAppDebug)
BRIDGE_DECL(vshSblSsIsDevelopmentMode)
BRIDGE_DECL(vshSblUtMgrHasComTestFlag)
BRIDGE_DECL(vshSblUtMgrHasNpTestFlag)
BRIDGE_DECL(vshSblUtMgrHasStoreFlag)
BRIDGE_DECL(vshSdGetCardInfo)
BRIDGE_DECL(vshSysconBeginConfigstorageTransaction)
BRIDGE_DECL(vshSysconClearTemperatureLog)
BRIDGE_DECL(vshSysconCommitConfigstorageTransaction)
BRIDGE_DECL(vshSysconEnableHibernateIO)
BRIDGE_DECL(vshSysconEndConfigstorageTransaction)
BRIDGE_DECL(vshSysconGetBatteryCalibData)
BRIDGE_DECL(vshSysconGetLogInfo)
BRIDGE_DECL(vshSysconHasWWAN)
BRIDGE_DECL(vshSysconIduModeClear)
BRIDGE_DECL(vshSysconIduModeSet)
BRIDGE_DECL(vshSysconIsDownLoaderMode)
BRIDGE_DECL(vshSysconIsIduMode)
BRIDGE_DECL(vshSysconIsMCEmuCapable)
BRIDGE_DECL(vshSysconIsShowMode)
BRIDGE_DECL(vshSysconLoadConfigstorageScript)
BRIDGE_DECL(vshSysconLogStart)
BRIDGE_DECL(vshSysconLogStartWaiting)
BRIDGE_DECL(vshSysconShowModeClear)
BRIDGE_DECL(vshSysconShowModeSet)
BRIDGE_DECL(vshSysconVerifyConfigstorageScript)
