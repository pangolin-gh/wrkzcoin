// Copyright (c) 2018-2019, The TurtleCoin Developers
//
// Please see the included LICENSE file for more information.

#pragma once

#include <errors/Errors.h>
#include <memory>
#include <string>
#include <subwallets/SubWallets.h>
#include <unordered_map>
#include <vector>

Error validateFusionTransaction(
    const uint64_t mixin,
    const std::vector<std::string> subWalletsToTakeFrom,
    const std::string destinationAddress,
    const std::shared_ptr<SubWallets> subWallets,
    const uint64_t currentHeight,
    const std::optional<uint64_t> optimizeTarget);

Error validateTransaction(
    const std::vector<std::pair<std::string, uint64_t>> destinations,
    const uint64_t mixin,
    const WalletTypes::FeeType fee,
    const std::string paymentID,
    const std::vector<std::string> subWalletsToTakeFrom,
    const std::string changeAddress,
    const std::shared_ptr<SubWallets> subWallets,
    const uint64_t unlockTime,
    const uint64_t currentHeight);

Error validateIntegratedAddresses(
    const std::vector<std::pair<std::string, uint64_t>> destinations,
    std::string paymentID);

Error validatePaymentID(const std::string paymentID);

Error validateHash(const std::string hash);

Error validatePrivateKey(const Crypto::SecretKey &privateViewKey);

Error validatePublicKey(const Crypto::PublicKey &publicKey);

Error validateMixin(const uint64_t mixin, const uint64_t height);

Error validateAmount(
    const std::vector<std::pair<std::string, uint64_t>> destinations,
    const WalletTypes::FeeType fee,
    const std::vector<std::string> subWalletsToTakeFrom,
    const std::shared_ptr<SubWallets> subWallets,
    const uint64_t currentHeight);

Error validateDestinations(const std::vector<std::pair<std::string, uint64_t>> destinations);

Error validateAddresses(std::vector<std::string> addresses, const bool integratedAddressesAllowed);

Error validateOurAddresses(const std::vector<std::string> addresses, const std::shared_ptr<SubWallets> subWallets);

Error validateOptimizeTarget(const std::optional<uint64_t> optimizeTarget);

Error validateUnlockTime(
    const uint64_t unlockTime,
    const uint64_t currentHeight);
